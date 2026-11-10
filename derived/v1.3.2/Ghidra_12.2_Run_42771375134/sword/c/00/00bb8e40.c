/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb8e40; name: FUN_00bb8e40
 */


void FUN_00bb8e40(long param_1,short param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    uVar1 = 0xcc31e1a7a9772dd4;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x2e0);
    if (lVar3 == 0) {
      FUN_014c9900(0,0,param_2,1);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_014c9900(lVar3,0,param_2,1);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    uVar1 = 0xba831a1f4d00c6ef;
  }
  FUN_00bb6fe0(param_1,uVar1,0xb8c7955ca9a80f7a);
  return;
}


