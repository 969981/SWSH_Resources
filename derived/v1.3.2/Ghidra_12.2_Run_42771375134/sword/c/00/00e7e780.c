/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e780; name: FUN_00e7e780
 */


undefined4 FUN_00e7e780(void)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_28;
  
  plVar1 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
  if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) == plVar1) {
    uVar2 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar2 = 0;
    if (lVar4 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      local_28 = *(undefined8 *)(lVar4 + 0x3a0);
      if (*(long *)(lVar3 + 0x688) == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = FUN_006e7220(*(long *)(lVar3 + 0x688),&local_28);
      }
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  return uVar2;
}


