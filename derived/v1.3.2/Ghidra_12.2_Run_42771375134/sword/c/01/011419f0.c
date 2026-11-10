/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011419f0; name: FUN_011419f0
 */


void FUN_011419f0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_48;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x5d0) + 0xc0);
  uVar2 = uVar1 >> 0x10;
  if ((((((uint)*(ushort *)(param_1 + 0x698) != (uVar1 & 0xffff)) || (param_2 == 1)) ||
       (*(uint *)(param_1 + 0x6ac) != *(uint *)(param_1 + 0x6b0))) ||
      (*(ushort *)(param_1 + 0x69a) != uVar2)) &&
     (bVar3 = (*(uint *)(param_1 + 0x6ac) & 0xfffffffe) == 2,
     *(byte *)(*(long *)(param_1 + 0x6d8) + 0x58) =
          *(byte *)(*(long *)(param_1 + 0x6d8) + 0x58) & 0xfe | bVar3, bVar3)) {
    local_48 = *(long *)(param_1 + 0x6c0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_008c4e70(param_1 + 0x100,&DAT_02165990,&local_48,&DAT_02165998,10);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar4 + 0x2e8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x6c0),&DAT_021659a0,lVar5);
    lVar6 = *(long *)(lVar4 + 0x2e0);
    if (lVar6 == 0) {
      FUN_014ca220(0,0,uVar1 & 0xffff,2,1,1);
      FUN_0167cce0(lVar4,&DAT_021659a8,10);
      FUN_014ca220(0,0,uVar2,2,2,1);
      FUN_0167cce0(lVar4,&DAT_021659b0,10);
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_014ca220(lVar6,0,uVar1 & 0xffff,2,1,1);
      FUN_0167cce0(lVar4,&DAT_021659a8,10);
      FUN_014ca220(lVar6,0,uVar2,2,2,1);
      FUN_0167cce0(lVar4,&DAT_021659b0,10);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


