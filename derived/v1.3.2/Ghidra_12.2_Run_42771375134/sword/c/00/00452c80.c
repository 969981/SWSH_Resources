/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00452c80; name: FUN_00452c80
 */


void FUN_00452c80(long param_1,float *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float local_44;
  
  local_44 = *(float *)(PTR_DAT_02712b40 + (ulong)param_3 * 4);
  pfVar3 = *(float **)(param_1 + 0x90);
  pfVar4 = pfVar3;
  if (pfVar3 != (float *)0x0) {
    uVar5 = 0;
    pfVar4 = (float *)((long)pfVar3 + ((ulong)(*(byte *)pfVar3 + 4) & 0x1fc));
    do {
      if ((uint)*(byte *)((long)pfVar3 + uVar5 + 1) == (param_3 & 0xff)) goto LAB_00452cfc;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar5 < *(byte *)pfVar3);
    pfVar4 = (float *)0x0;
  }
LAB_00452cfc:
  pfVar3 = &local_44;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfVar4;
  }
  *param_2 = *param_2 + *pfVar3;
  uVar1 = *(uint *)(PTR_DAT_02712b48 + (ulong)param_3 * 4);
  uVar7 = (ulong)uVar1;
  plVar8 = (long *)(param_1 + 0x18);
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,uVar7);
  fVar10 = 0.0;
  if (((((uVar5 & 1) != 0) && (uVar5 = FUN_004b3450(plVar8), (uVar5 & 1) != 0)) &&
      (uVar5 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar7), (uVar5 & 1) != 0)) &&
     ((plVar8 = (long *)(**(code **)(*plVar8 + 0x80))(plVar8), plVar8 != (long *)0x0 &&
      (lVar2 = *plVar8, lVar2 != 0)))) {
    fVar10 = 0.0;
    do {
      puVar6 = *(ushort **)(lVar2 + 0x20);
      if (puVar6 != (ushort *)0x0) {
        uVar5 = 0;
        pfVar4 = (float *)((long)puVar6 + ((ulong)((uint)*puVar6 * 2 + 5) & 0x3fffc));
        do {
          if ((uint)puVar6[uVar5 + 1] == (uVar1 & 0xffff)) {
            if (pfVar4 != (float *)0x0) {
              fVar10 = *pfVar4 + fVar10;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          pfVar4 = pfVar4 + 4;
        } while (uVar5 < *puVar6);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
    } while (lVar2 != 0);
  }
  if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
     ((**(ulong **)(param_1 + 0x38) & 1L << (uVar7 & 0x3f)) != 0)) {
    fVar9 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,uVar7,param_4);
    fVar10 = fVar9 + fVar10;
  }
  *param_2 = *param_2 + fVar10;
  return;
}


