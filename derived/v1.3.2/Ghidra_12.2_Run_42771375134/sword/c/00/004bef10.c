/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bef10; name: FUN_004bef10
 */


undefined8
FUN_004bef10(undefined4 param_1,long *param_2,undefined8 param_3,int param_4,ulong param_5,
            undefined4 *param_6,long *param_7,byte param_8)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_60 [2];
  undefined8 local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined1 local_44;
  byte local_43;
  
  local_48 = 1;
  local_44 = 0;
  puVar1 = (uint *)((long)param_7 + 0x26b);
  local_43 = (*puVar1 & 0x4000000) == 0 & param_8;
  plStack_50 = param_7 + 0x55;
  local_60[0] = param_1;
  local_58 = param_3;
  iVar2 = (**(code **)(*param_2 + 0x118))(param_2,local_60,1,0);
  if ((iVar2 == 2) ||
     (((param_4 == 0x50 || (iVar2 == 0x50)) && (*puVar1 = *puVar1 | 0x2000000, (param_5 & 1) == 0)))
     ) {
    *param_6 = 0x20;
    uVar3 = 3;
  }
  else {
    uVar3 = (**(code **)(*param_7 + 0x18))(param_7);
  }
  return uVar3;
}


