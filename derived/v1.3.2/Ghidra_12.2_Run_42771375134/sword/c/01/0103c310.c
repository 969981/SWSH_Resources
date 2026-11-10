/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c310; name: FUN_0103c310
 */


undefined8 FUN_0103c310(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_012b4090(param_1 + 0x170);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_012b4190(auStack_40,param_1 + 0x170,(long)param_2);
  local_58 = 0x24312a27509e058c;
  local_50 = &DAT_01cebaa4;
  local_48 = 3;
  FUN_012b4250(auStack_30,auStack_40,&local_58);
  local_60 = 0;
  uVar2 = FUN_012b4b40(auStack_30,&local_60);
  return uVar2;
}


