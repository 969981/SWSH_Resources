/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc750; name: FUN_006fc750
 */


void FUN_006fc750(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_24;
  
  FUN_006fc830();
  puVar1 = PTR_DAT_02715830 + 0x40;
  *param_1 = (long)(PTR_DAT_02715830 + 0x10);
  param_1[9] = (long)puVar1;
  local_24 = 0;
  if (0 < param_2) {
    *(int *)PTR_DAT_02715838 = param_2;
  }
  puVar2 = PTR_DAT_027155e8;
  puVar1 = PTR_DAT_02713a38;
  (**(code **)PTR_DAT_02713a38)(*(undefined8 *)PTR_DAT_027155e8,0x11,&local_24);
  (**(code **)puVar1)(*(undefined8 *)puVar2,0x24,&local_50);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0199bf30(&local_50);
  local_50 = CONCAT71(local_50._1_7_,1);
  local_50 = CONCAT44(*(undefined4 *)PTR_DAT_02715838,(undefined4)local_50);
  FUN_006fc960(param_1,&local_50,local_24);
  return;
}


