#include <stdio.h>
#define LEFT_CHILD(x)    (2*x + 1)
#define RIGHT_CHILD(x) (2*x + 2)
#define PARENT(x)        ((x-1)/2)
#define SWAP(a,b)  {int t; t = a; a=b; b=t;}//a�� b�� ��ȯ

void HeapSort(int *base, int n);
void ViewArr(int *arr, int n);
int main(void)

{
    int arr[10] = { 5,23,19,37,29,48,59,62,36};
    ViewArr(arr, 10);
    HeapSort(arr, 10);
    ViewArr(arr, 10);
    return 0;
}

void InitHeap(int *base, int n);
void MakeHeap(int *base, int n);

void HeapSort(int *base, int n)
{

    int on = n;
    printf("�ʱ� ���� ��������\n");
    InitHeap(base, n);
    n--;

    SWAP(base[0], base[n]);

    printf("���İ���\n");

    while (n>1)

    {
        MakeHeap(base, n);
        ViewArr(base, n + 1);
        n--;

        SWAP(base[0], base[n]);

    }

    ViewArr(base, n + 1);
}

 

void InitHeap(int *base, int n)

{

    int pa = 0;

    int now;
    int i;

    for (i = 1; i<n; i++)//���������� ���� ����

    {

        now = i;
        while (now>0)//now�� �ε����� 0�� �ƴϸ�(���� ��Ʈ�� �ƴϸ�)
        {

            pa = PARENT(now);//�θ� �ε��� ����
            if (base[now]>base[pa])//�θ𺸴� �� ũ��
            {
                SWAP(base[now], base[pa]);//�θ�� ��ȯ
                now = pa;//�ε����� �θ�� ����
            }

            else//�ƴϸ� �ڸ��� ã�� ����
            {
                break;
            }
        }
        ViewArr(base, i + 1);
    }
}
int FindMaxIndex(int *base, int n, int now);
void MakeHeap(int *base, int n)
{

    int now = 0;
    int mp = 0;
    //��Ʈ�� �ִ� ��Ҹ� �� Ʈ���� �°� �ڸ��� ã�� ����

    while (LEFT_CHILD(now) < n)//���� �ڽ��� �ִٸ�
    {
        int mp = FindMaxIndex(base, n, now);//now�� ����, ������ �ڽ� �߿� ū ���� ��ġ ã��
        if (mp == now)//mp�� now�� ������
        {
            break;//�ڸ��� ã�� ����
        }
        if(base[mp] > base[now])
        {
            SWAP(base[mp], base[now]);//now�� ū ���� �ڸ� ��ȯ
        }
        now = mp;//ū ���� ��ġ�� now�� ����        
    }
}
int FindMaxIndex(int *base, int n, int now)
{

    int lc = LEFT_CHILD(now);//���� �ڽ�
    int rc = RIGHT_CHILD(now);//������ �ڽ�
    
    if (rc >= n)//������ �ڽ��� ���� ��

    {
        if (base[now]<base[lc])
        {
            return lc;
        }

        return now;
    }

    if (base[lc]<base[rc])
    {
        return rc;
    }
    return lc;
}

void ViewArr(int *arr, int n)
{

    int i = 0;
    for (i = 0; i<n; i++)
    {
        printf("%2d ", arr[i]);
    }

    printf("\n");
}