/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c4c0; name: FUN_0048c4c0
 */


void FUN_0048c4c0(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  plVar1 = param_1 + 0x3c;
  if ((param_2 & 1) == 0) {
    plVar1 = param_1 + 0x3d;
  }
  iVar3 = (int)param_3;
  if ((iVar3 == 0x4000000) || (iVar3 == 0x2000000)) {
    local_54 = 0;
  }
  else {
    local_54 = 0x3f800000;
  }
  if (*plVar1 != 0) {
    FUN_004be340(*(undefined8 *)PTR_DAT_02712b18,*plVar1,param_3,param_4 & 0xffffffff,
                 param_4 >> 0x20,0);
    return;
  }
  plVar1 = param_1 + 0x43;
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)((long)param_1 + 0x21c);
  }
  local_58 = (undefined4)*plVar1;
  local_68 = param_1 + 2;
  local_50 = (undefined4)param_4;
  uStack_4c = (undefined4)(param_4 >> 0x20);
  local_48 = 0x100;
  local_46 = 0;
  local_60 = param_3;
  lVar2 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_68,1,0);
  if ((param_2 & 1) == 0) {
    param_1[0x3d] = lVar2;
  }
  else {
    param_1[0x3c] = lVar2;
    *(uint *)((long)param_1 + 0x26b) =
         *(uint *)((long)param_1 + 0x26b) & 0xdfffffff | (uint)(iVar3 == 0x1000000) << 0x1d;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,0xe,param_4 & 0xffffffff);
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x28))(local_54,param_1,local_60,1);
  }
  return;
}


