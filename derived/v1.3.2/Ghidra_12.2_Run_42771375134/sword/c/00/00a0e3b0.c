/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0e3b0; name: FUN_00a0e3b0
 */


void FUN_00a0e3b0(long param_1,long *param_2,int param_3)

{
  ulong uVar1;
  undefined8 local_58;
  undefined8 local_50;
  long *plStack_48;
  undefined8 local_40;
  int local_38;
  undefined1 local_34;
  
  if (param_2 != (long *)0x0) {
    local_34 = 0;
    if (param_3 == 0) {
      param_3 = 1;
    }
    (**(code **)(*param_2 + 0x808))(param_2,*(undefined8 *)(param_1 + 0x620),1);
    local_58 = *(undefined8 *)(param_1 + 0x5f8);
    local_50 = *(undefined8 *)(param_1 + 0x5f0);
    local_40 = *(undefined8 *)(param_1 + 0x620);
    plStack_48 = param_2;
    local_38 = param_3;
    FUN_00a10760(*(undefined8 *)(param_1 + 0x600),&local_58);
    uVar1 = FUN_008e1600(*(undefined8 *)(param_1 + 0x620));
    if ((uVar1 & 1) != 0) {
      *(byte *)(*(long *)(param_1 + 0x660) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x660) + 0x58) & 0xfe;
    }
  }
  return;
}


