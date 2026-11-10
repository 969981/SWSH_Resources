/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009513e0; name: FUN_009513e0
 */


void FUN_009513e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  uint local_28;
  
  if (*(char *)((long)param_3 + 7) != '\0') {
    FUN_009423b0(param_1);
    FUN_0093a0b0();
  }
  local_30 = *param_3;
  local_2c = *(undefined1 *)((long)param_3 + 6);
  local_28 = (uint)*(ushort *)(param_3 + 1);
  FUN_00942450(param_1);
  uVar1 = FUN_00925d10();
  FUN_0094ab90(uVar1,auStack_38,&local_30);
  uVar1 = FUN_009423b0(param_1);
  FUN_00935bf0(uVar1,param_3 + 2);
  return;
}


