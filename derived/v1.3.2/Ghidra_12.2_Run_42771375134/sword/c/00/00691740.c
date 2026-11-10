/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00691740; name: FUN_00691740
 */


int FUN_00691740(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_90;
  int local_88;
  undefined8 local_78;
  undefined4 local_70;
  ulong local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = (int)param_4;
  if (((int)((ulong)param_4 >> 0x20) != 0) ||
     (local_70 = (undefined4)*param_2, *param_2 >> 0x20 != 0)) {
    return -5;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_90 = param_3;
  local_78 = param_1;
  iVar1 = FUN_006919a0(&local_90,"1.2.5",0x70);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_006919b0(&local_90,4);
  if (iVar1 == 1) {
    *param_2 = local_68;
    iVar1 = FUN_006935e0(&local_90);
    return iVar1;
  }
  FUN_006935e0(&local_90);
  if (iVar1 != 2) {
    if (iVar1 != -5) {
      return iVar1;
    }
    if (local_88 != 0) {
      return -5;
    }
  }
  return -3;
}


