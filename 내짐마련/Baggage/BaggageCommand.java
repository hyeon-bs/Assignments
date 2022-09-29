
package cse.design_pattern;

public class BaggageCommand implements Command {
  private ConfirmBaggage cheak;

  public BaggageCommand(ConfirmBaggage display, ItemBaggage display, QuantityBaggage display) {
  }

  public void execute() {
  }

  private QuantityBaggage quantity;

  private ItemBaggage item;

}
