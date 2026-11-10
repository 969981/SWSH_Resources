/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141ae90; name: FUN_0141ae90
 */


void FUN_0141ae90(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    local_38 = 0x7f29f69422ecb510;
    FUN_0167b9b0(0,&local_38,param_2 & 1);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_38 = 0x7f29f69422ecb510;
    FUN_0167b9b0(lVar1,&local_38,param_2 & 1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


