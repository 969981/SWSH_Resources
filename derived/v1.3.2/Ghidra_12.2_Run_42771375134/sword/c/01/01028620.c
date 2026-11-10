/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028620; name: FUN_01028620
 */


void FUN_01028620(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  nn::oe::SetFocusHandlingMode(0);
  nn::oe::SetOperationModeChangedNotificationEnabled(true);
  uVar1 = nn::oe::GetOperationMode();
  if (uVar1 < 2) {
    *(uint *)(param_1 + 0x350) = uVar1;
  }
  pcVar2 = *(code **)(param_1 + 0x68);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*pcVar2)(param_1 + 0x80);
  }
  *(undefined1 **)(param_1 + 0x60) = &LAB_01028d50;
  *(undefined1 **)(param_1 + 0x68) = &LAB_01028dd0;
  *(undefined1 **)(param_1 + 0x70) = &LAB_01028de0;
  *(undefined1 **)(param_1 + 0x78) = &LAB_01028df0;
  pcVar2 = *(code **)(param_1 + 0x108);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    (*pcVar2)(param_1 + 0x120);
  }
  *(undefined1 **)(param_1 + 0x100) = &LAB_01028e00;
  *(undefined1 **)(param_1 + 0x108) = &LAB_01028e90;
  *(undefined1 **)(param_1 + 0x110) = &LAB_01028ea0;
  *(undefined1 **)(param_1 + 0x118) = &LAB_01028eb0;
  pcVar2 = *(code **)(param_1 + 0x1a8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*pcVar2)(param_1 + 0x1c0);
  }
  *(long *)(param_1 + 0x1c0) = param_1;
  *(undefined1 **)(param_1 + 0x1a0) = &LAB_01028ec0;
  *(undefined1 **)(param_1 + 0x1a8) = &LAB_01028ef0;
  *(undefined1 **)(param_1 + 0x1b0) = &LAB_01028f00;
  *(undefined1 **)(param_1 + 0x1b8) = &LAB_01028f10;
  pcVar2 = *(code **)(param_1 + 0x248);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    (*pcVar2)(param_1 + 0x260);
  }
  *(long *)(param_1 + 0x260) = param_1;
  *(undefined1 **)(param_1 + 0x240) = &LAB_01028f20;
  *(undefined1 **)(param_1 + 0x248) = &LAB_01028f30;
  *(undefined1 **)(param_1 + 0x250) = &LAB_01028f50;
  *(undefined1 **)(param_1 + 600) = &LAB_01028f60;
  uVar3 = *(undefined8 *)PTR_DAT_027153c0;
  FUN_006d7210(uVar3,0,param_1 + 0x50);
  FUN_006d7210(uVar3,1,param_1 + 0xf0);
  FUN_006d7210(uVar3,2,param_1 + 400);
  FUN_006d7210(uVar3,4,param_1 + 0x230);
  return;
}


