/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042e320; name: FUN_0042e320
 */


void FUN_0042e320(int *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_50 = *(undefined8 *)(param_2 + 0x30);
  local_40 = param_2 + 0x14;
  local_38 = param_2 + 0x1c;
  local_48 = param_1[1];
  local_44 = FUN_004699c0(param_2);
  local_30 = param_2;
  lVar2 = FUN_004699e0(param_2);
  local_28 = 0;
  if (lVar2 != 0) {
    local_28 = lVar2 + 0xc0;
  }
  local_60 = (**(code **)(**(long **)(param_2 + 0x48) + 0x10))();
  if (*param_1 == 0) {
    uVar3 = *(undefined8 *)PTR_DAT_02712d50;
    uVar1 = (**(code **)(**(long **)(param_2 + 0x48) + 0x70))();
    FUN_00457cb0(uVar3,uVar1,auStack_68);
    return;
  }
  FUN_0048f540(*(undefined8 *)PTR_DAT_02712ad0,*param_1,auStack_68);
  return;
}


