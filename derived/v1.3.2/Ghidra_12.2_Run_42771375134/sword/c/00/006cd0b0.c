/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cd0b0; name: FUN_006cd0b0
 */


void FUN_006cd0b0(long param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  
  uVar7 = (ulong)*param_2;
  uVar8 = *(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240) >> 5;
  if (uVar8 < uVar7) {
    FUN_006ce6c0((long *)(param_1 + 0x240),uVar7 - uVar8);
    uVar3 = *param_2;
  }
  else {
    if (uVar8 != uVar7) {
      lVar10 = *(long *)(param_1 + 0x240) + uVar7 * 0x20;
      lVar12 = *(long *)(param_1 + 0x248);
      while (lVar5 = lVar12, lVar10 != lVar5) {
        lVar12 = lVar5 + -0x20;
        if (*(long *)(lVar5 + -8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + -8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + -8) = 0;
        }
      }
      *(long *)(param_1 + 0x248) = lVar10;
    }
    uVar3 = *param_2;
  }
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      piVar1 = (int *)((long)(param_2 + uVar7 + 1) + (ulong)param_2[uVar7 + 1]);
      lVar10 = *(long *)(param_1 + 0x240);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) {
        lVar12 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar8);
        lVar12 = (long)puVar2 + (ulong)*puVar2;
      }
      sVar6 = strlen((char *)(lVar12 + 4));
      bVar4 = *(byte *)(lVar12 + 4);
      uVar8 = 0xcbf29ce484222645;
      if (bVar4 != 0) {
        uVar8 = 0xcbf29ce484222645;
        pbVar9 = (byte *)(lVar12 + 5);
        do {
          uVar8 = (uVar8 ^ bVar4) * 0x100000001b3;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 != 0);
      }
      puVar11 = (ulong *)(lVar10 + uVar7 * 0x20);
      *puVar11 = uVar8;
      puVar11[1] = (ulong)(lVar12 + 4);
      puVar11[2] = sVar6;
      puVar11 = puVar11 + 3;
      if (*puVar11 != 0) {
        (**(code **)(*(long *)(*puVar11 + 0x48) + 0x18))();
        *puVar11 = 0;
      }
      *puVar11 = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_2);
  }
  return;
}


