/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb05e0; name: FUN_00bb05e0
 */


undefined8 FUN_00bb05e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  local_38 = 0xaadeb44d187f565e;
  if ((*(long *)(param_1 + 0x2b0) == 0) ||
     (uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_38), (uVar2 & 1) != 0)) {
    lVar1 = param_1 + 0x100;
    local_38 = 0xc72ea1416f28d65c;
    uVar3 = FUN_00ffdef0(lVar1,&local_38);
    uVar5 = 1;
    FUN_016b2da0(uVar3,1);
    FUN_00ffcf80(lVar1,"anime_search_list_sub");
    FUN_00bad910(param_1);
    local_38 = 0x8810f6ba0b0e64ea;
    plVar4 = (long *)FUN_00ffde30(lVar1,&local_38);
    FUN_016b2d70(plVar4,1);
    (**(code **)(*plVar4 + 0x50))(plVar4);
    local_38 = 0xc72ea1416f28d65c;
    uVar3 = FUN_00ffdef0(lVar1,&local_38);
    FUN_016b2da0(uVar3,1);
    FUN_00ffa160(param_1,1,1);
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


