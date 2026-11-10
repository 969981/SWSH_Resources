/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146bdb0; name: FUN_0146bdb0
 */


void FUN_0146bdb0(long param_1,ulong param_2)

{
  short sVar1;
  undefined2 uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if (((*(long *)(param_1 + 0x148) != -0x340d631b7bddd9bb && *(long *)(param_1 + 0x148) != 0) &&
      (*(long *)(param_1 + 0x150) != -0x340d631b7bddd9bb)) && (*(long *)(param_1 + 0x150) != 0)) {
    lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 8),param_1 + 0x148);
    if ((param_2 & 1) == 0) {
      bVar4 = *(byte *)(lVar3 + 0x58);
    }
    else {
      sVar1 = FUN_008787f0(*(undefined8 *)(param_1 + 0x18));
      bVar4 = *(byte *)(lVar3 + 0x58);
      if (sVar1 != 0) {
        *(byte *)(lVar3 + 0x58) = bVar4 | 1;
        lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2e0);
        if (lVar3 == 0) {
          uVar2 = FUN_008787f0(*(undefined8 *)(param_1 + 0x18));
          FUN_014c9900(0,0,uVar2,1);
        }
        else {
          plVar6 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          uVar2 = FUN_008787f0(*(undefined8 *)(param_1 + 0x18));
          FUN_014c9900(lVar3,0,uVar2,1);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x2e8);
        if (lVar3 == 0) {
          FUN_0077eb10(uVar5,param_1 + 0x170,0);
        }
        else {
          plVar6 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0077eb10(uVar5,param_1 + 0x170,lVar3);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        FUN_0167cce0(*(undefined8 *)(param_1 + 8),param_1 + 0x150,10);
        return;
      }
    }
    *(byte *)(lVar3 + 0x58) = bVar4 & 0xfe;
  }
  return;
}


