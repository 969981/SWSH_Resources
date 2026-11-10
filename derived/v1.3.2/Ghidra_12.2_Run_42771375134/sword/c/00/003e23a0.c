/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e23a0; name: FUN_003e23a0
 */


void FUN_003e23a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_90 [40];
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_90);
  if (*(int *)(param_1 + 0x11c0) != 0) {
    uVar1 = *(uint *)(param_1 + 0x110c);
    uVar6 = 0;
    lVar7 = 8;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x11b8) + lVar7);
      uVar2 = FUN_003fb250(lVar5,0,1,auStack_90,uVar1 >> 4 & 1);
      if (((uVar2 & 1) != 0) && ((*(byte *)(lVar5 + 0x42) >> 2 & 1) == 0)) {
        lVar3 = FUN_003fc7b0(*(undefined8 *)(lVar5 + 0x28));
        local_60 = FUN_003fc7b0(*(undefined8 *)(lVar5 + 0x30));
        local_58 = *(undefined4 *)(lVar3 + 0x58);
        uStack_54 = *(undefined4 *)(local_60 + 0x58);
        local_68 = lVar3;
        if (*(uint *)(param_1 + 0x1180) < (*(uint *)(param_1 + 0x1184) & 0x7fffffff)) {
          plVar4 = (long *)(*(long *)(param_1 + 0x1178) + (ulong)*(uint *)(param_1 + 0x1180) * 0x18)
          ;
          plVar4[2] = CONCAT44(uStack_54,local_58);
          plVar4[1] = local_60;
          *plVar4 = lVar3;
          *(int *)(param_1 + 0x1180) = *(int *)(param_1 + 0x1180) + 1;
        }
        else {
          FUN_003f75f0(param_1 + 0x1178,&local_68);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_1 + 0x11c0));
  }
  return;
}


