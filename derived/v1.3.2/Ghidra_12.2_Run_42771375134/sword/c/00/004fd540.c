/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fd540; name: FUN_004fd540
 */


long FUN_004fd540(long *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  bVar3 = *(byte *)(param_1 + 0x17);
  if ((uint)bVar3 < *(uint *)(param_1 + 0x14)) {
    plVar7 = (long *)param_1[0x16];
    uVar4 = (uint)bVar3;
    if (uVar4 != 0) {
      if (2 < uVar4 - 1) {
        iVar5 = (uVar4 & 3) - uVar4;
        do {
          plVar7 = *(long **)**(undefined8 **)*plVar7;
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0);
      }
      if ((bVar3 & 3) != 0) {
        iVar5 = -(uVar4 & 3);
        do {
          plVar7 = (long *)*plVar7;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0);
      }
    }
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) == param_1[0xf]) {
      *(byte *)(param_1 + 0x17) = bVar3 + 1;
      param_1[0xf] = *(long *)plVar7[1] + (ulong)*(uint *)((long *)plVar7[1] + 3);
      *param_2 = *(int *)(plVar7[1] + 0x18) - (int)plVar7[2];
      lVar6 = *(long *)plVar7[1];
      uVar4 = *(uint *)((long)param_1 + 0x8c);
      uVar2 = *(uint *)((long *)plVar7[1] + 3);
      uVar1 = lVar6 + (ulong)*(uint *)(plVar7 + 2);
      if ((uVar1 < uVar4) && ((ulong)uVar4 < lVar6 + (ulong)uVar2)) {
        iVar5 = uVar4 - (int)uVar1;
      }
      else {
        iVar5 = uVar2 - *(uint *)(plVar7 + 2);
      }
      *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) - iVar5;
      FUN_004fcbe0(param_1);
      return *(long *)(plVar7[1] + 8) + (ulong)*(uint *)(plVar7 + 2);
    }
    (**(code **)(*param_1 + 0x108))(param_1,0);
    FUN_004fc530(param_1);
  }
  *param_2 = 0;
  return 0;
}


