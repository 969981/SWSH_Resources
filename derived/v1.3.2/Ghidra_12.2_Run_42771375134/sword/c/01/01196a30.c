/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01196a30; name: FUN_01196a30
 */


bool FUN_01196a30(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  FUN_011ffb60(&local_28,*(undefined8 *)PTR_DAT_02718f20);
  if (local_28 == 0) {
    bVar1 = false;
  }
  else {
    lVar6 = *(long *)(local_28 + 0x10);
    bVar1 = false;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x288);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      cVar2 = FUN_007a9cb0();
      uVar3 = FUN_014fba80(lVar5,lVar6 + 0x60,3,cVar2 == '\x02');
      bVar1 = (~uVar3 & 0xffff) != 0;
      if (bVar1) {
        FUN_014fbc60(lVar5,uVar3);
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return bVar1;
}


