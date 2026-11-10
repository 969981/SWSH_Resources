/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00daa6f0; name: FUN_00daa6f0
 */


void FUN_00daa6f0(undefined8 param_1,undefined1 *param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((float)param_1 <= 0.0) {
    memcpy(param_2,param_3,0x8a0);
    return;
  }
  memcpy(param_2,param_4,0x8a0);
  puVar2 = (undefined8 *)PTR_PTR_02718e90;
  if ((float)param_1 < 1.0) {
    cVar1 = *param_4;
    if ((*param_3 != cVar1) || (cVar1 != '\0')) {
      if (*param_3 == cVar1) {
        if (*(int *)(param_3 + 4) == *(int *)(param_4 + 4)) {
          fVar7 = *(float *)(param_3 + 8);
          fVar11 = *(float *)(param_4 + 8);
          fVar4 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          *(float *)(param_2 + 8) = fVar7 + (fVar11 - fVar7) * fVar4;
          fVar7 = *(float *)(param_3 + 0xc);
          fVar11 = *(float *)(param_4 + 0xc);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          *(float *)(param_2 + 0xc) = fVar7 + (fVar11 - fVar7) * fVar4;
          fVar7 = *(float *)(param_3 + 0x10);
          fVar11 = *(float *)(param_4 + 0x10);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          *(float *)(param_2 + 0x10) = fVar7 + (fVar11 - fVar7) * fVar4;
          fVar8 = *(float *)(param_3 + 0x20);
          fVar12 = *(float *)(param_4 + 0x20);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          fVar13 = *(float *)(param_4 + 0x24);
          fVar9 = *(float *)(param_3 + 0x24);
          fVar7 = (float)(*(code *)*puVar2)(param_1);
          fVar14 = *(float *)(param_4 + 0x28);
          fVar10 = *(float *)(param_3 + 0x28);
          fVar11 = (float)(*(code *)*puVar2)(param_1);
          *(ulong *)(param_2 + 0x28) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
          *(ulong *)(param_2 + 0x20) =
               CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
          fVar7 = *(float *)(param_3 + 0x30);
          fVar11 = *(float *)(param_4 + 0x30);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          lVar3 = 0;
          *(float *)(param_2 + 0x30) = fVar7 + (fVar11 - fVar7) * fVar4;
          do {
            fVar7 = *(float *)(param_3 + lVar3 + 0x40);
            fVar11 = *(float *)(param_4 + lVar3 + 0x40);
            fVar4 = (float)(*(code *)*puVar2)(param_1);
            *(float *)(param_2 + lVar3 + 0x40) = fVar7 + (fVar11 - fVar7) * fVar4;
            lVar3 = lVar3 + 4;
          } while (lVar3 != 0x800);
        }
        else {
          *(undefined4 *)(param_2 + 4) = 3;
          puVar2 = (undefined8 *)PTR_PTR_02718e90;
          fVar7 = *(float *)(param_3 + 8);
          fVar11 = *(float *)(param_4 + 8);
          fVar4 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          *(float *)(param_2 + 8) = fVar7 + (fVar11 - fVar7) * fVar4;
          fVar7 = *(float *)(param_3 + 0xc);
          fVar11 = *(float *)(param_4 + 0xc);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
          *(float *)(param_2 + 0xc) = fVar7 + (fVar11 - fVar7) * fVar4;
          fVar8 = *(float *)(param_3 + 0x20);
          fVar12 = *(float *)(param_4 + 0x20);
          fVar4 = (float)(*(code *)*puVar2)(param_1);
          fVar13 = *(float *)(param_4 + 0x24);
          fVar9 = *(float *)(param_3 + 0x24);
          fVar7 = (float)(*(code *)*puVar2)(param_1);
          fVar14 = *(float *)(param_4 + 0x28);
          fVar10 = *(float *)(param_3 + 0x28);
          fVar11 = (float)(*(code *)*puVar2)(param_1);
          *(ulong *)(param_2 + 0x28) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
          *(ulong *)(param_2 + 0x20) =
               CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
          fVar11 = *(float *)(param_3 + 0x30);
          fVar8 = *(float *)(param_4 + 0x30);
          fVar7 = (float)(*(code *)*puVar2)(param_1);
          fVar4 = DAT_01d4bd00;
          lVar3 = 0;
          *(float *)(param_2 + 0x30) = fVar11 + (fVar8 - fVar11) * fVar7;
          do {
            if (*(int *)(param_3 + 4) == 3) {
              fVar7 = *(float *)(param_3 + lVar3 * 4 + 0x40);
              if (*(int *)(param_4 + 4) != 3) goto LAB_00daaaf0;
LAB_00daab28:
              fVar11 = *(float *)(param_4 + lVar3 * 4 + 0x40);
            }
            else {
              fVar7 = (float)FUN_00dab640((float)(int)lVar3 / fVar4,param_3);
              if (*(int *)(param_4 + 4) == 3) goto LAB_00daab28;
LAB_00daaaf0:
              fVar11 = (float)FUN_00dab640((float)(int)lVar3 / fVar4,param_4);
            }
            fVar8 = (float)(*(code *)*puVar2)(param_1);
            *(float *)(param_2 + lVar3 * 4 + 0x40) = fVar7 + (fVar11 - fVar7) * fVar8;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0x200);
        }
        fVar8 = *(float *)(param_3 + 0x850);
        fVar12 = *(float *)(param_4 + 0x850);
        fVar4 = (float)(*(code *)*puVar2)(param_1);
        fVar9 = *(float *)(param_3 + 0x854);
        fVar13 = *(float *)(param_4 + 0x854);
        fVar7 = (float)(*(code *)*puVar2)(param_1);
        fVar10 = *(float *)(param_3 + 0x858);
        fVar14 = *(float *)(param_4 + 0x858);
        fVar11 = (float)(*(code *)*puVar2)(param_1);
        *(ulong *)(param_2 + 0x858) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
        *(ulong *)(param_2 + 0x850) =
             CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
        fVar8 = *(float *)(param_3 + 0x860);
        fVar12 = *(float *)(param_4 + 0x860);
        fVar4 = (float)(*(code *)*puVar2)(param_1);
        fVar9 = *(float *)(param_3 + 0x864);
        fVar13 = *(float *)(param_4 + 0x864);
        fVar7 = (float)(*(code *)*puVar2)(param_1);
        fVar10 = *(float *)(param_3 + 0x868);
        fVar14 = *(float *)(param_4 + 0x868);
        fVar11 = (float)(*(code *)*puVar2)(param_1);
        *(ulong *)(param_2 + 0x868) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
        *(ulong *)(param_2 + 0x860) =
             CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
        fVar8 = *(float *)(param_3 + 0x870);
        fVar12 = *(float *)(param_4 + 0x870);
        fVar4 = (float)(*(code *)*puVar2)(param_1);
        fVar9 = *(float *)(param_3 + 0x874);
        fVar13 = *(float *)(param_4 + 0x874);
        fVar7 = (float)(*(code *)*puVar2)(param_1);
        fVar10 = *(float *)(param_3 + 0x878);
        fVar14 = *(float *)(param_4 + 0x878);
        fVar11 = (float)(*(code *)*puVar2)(param_1);
        *(ulong *)(param_2 + 0x878) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
        *(ulong *)(param_2 + 0x870) =
             CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
        fVar8 = *(float *)(param_3 + 0x880);
        fVar12 = *(float *)(param_4 + 0x880);
        fVar4 = (float)(*(code *)*puVar2)(param_1);
        fVar9 = *(float *)(param_3 + 0x884);
        fVar13 = *(float *)(param_4 + 0x884);
        fVar7 = (float)(*(code *)*puVar2)(param_1);
        fVar10 = *(float *)(param_3 + 0x888);
        fVar14 = *(float *)(param_4 + 0x888);
        fVar11 = (float)(*(code *)*puVar2)(param_1);
        *(ulong *)(param_2 + 0x888) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
        *(ulong *)(param_2 + 0x880) =
             CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
        fVar8 = *(float *)(param_3 + 0x890);
        fVar12 = *(float *)(param_4 + 0x890);
        fVar4 = (float)(*(code *)*puVar2)(param_1);
        fVar9 = *(float *)(param_3 + 0x894);
        fVar13 = *(float *)(param_4 + 0x894);
        fVar7 = (float)(*(code *)*puVar2)(param_1);
        fVar10 = *(float *)(param_3 + 0x898);
        fVar14 = *(float *)(param_4 + 0x898);
        fVar11 = (float)(*(code *)*puVar2)(param_1);
        *(ulong *)(param_2 + 0x898) = (ulong)(uint)(fVar10 + (fVar14 - fVar10) * fVar11);
        *(ulong *)(param_2 + 0x890) =
             CONCAT44(fVar9 + (fVar13 - fVar9) * fVar7,fVar8 + (fVar12 - fVar8) * fVar4);
      }
      else {
        if (cVar1 == '\0') {
          *param_2 = 1;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
          fVar7 = *(float *)(param_3 + 0x10);
          fVar4 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          *(float *)(param_2 + 0x10) = fVar7 + (0.0 - fVar7) * fVar4;
          uVar5 = *(undefined8 *)(param_3 + 0x28);
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
          *(undefined8 *)(param_2 + 0x28) = uVar5;
          *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
          uVar5 = *(undefined8 *)(param_3 + 0x850);
          *(ulong *)(param_2 + 0x858) = *(ulong *)(param_3 + 0x858) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x850) = uVar5;
          uVar5 = *(undefined8 *)(param_3 + 0x860);
          *(ulong *)(param_2 + 0x868) = *(ulong *)(param_3 + 0x868) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x860) = uVar5;
          uVar5 = *(undefined8 *)(param_3 + 0x870);
          *(ulong *)(param_2 + 0x878) = *(ulong *)(param_3 + 0x878) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x870) = uVar5;
          uVar5 = *(undefined8 *)(param_3 + 0x880);
          *(ulong *)(param_2 + 0x888) = *(ulong *)(param_3 + 0x888) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x880) = uVar5;
          uVar6 = (uint)*(undefined8 *)(param_3 + 0x898);
          uVar5 = *(undefined8 *)(param_3 + 0x890);
        }
        else {
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_4 + 4);
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_4 + 8);
          *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_4 + 0xc);
          fVar7 = *(float *)(param_4 + 0x10);
          fVar4 = (float)(**(code **)PTR_PTR_02718e90)(param_1);
          *(float *)(param_2 + 0x10) = fVar7 * fVar4 + 0.0;
          uVar5 = *(undefined8 *)(param_4 + 0x28);
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_4 + 0x20);
          *(undefined8 *)(param_2 + 0x28) = uVar5;
          *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_4 + 0x30);
          uVar5 = *(undefined8 *)(param_4 + 0x850);
          *(ulong *)(param_2 + 0x858) = *(ulong *)(param_4 + 0x858) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x850) = uVar5;
          uVar5 = *(undefined8 *)(param_4 + 0x860);
          *(ulong *)(param_2 + 0x868) = *(ulong *)(param_4 + 0x868) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x860) = uVar5;
          uVar5 = *(undefined8 *)(param_4 + 0x870);
          *(ulong *)(param_2 + 0x878) = *(ulong *)(param_4 + 0x878) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x870) = uVar5;
          uVar5 = *(undefined8 *)(param_4 + 0x880);
          *(ulong *)(param_2 + 0x888) = *(ulong *)(param_4 + 0x888) & 0xffffffff;
          *(undefined8 *)(param_2 + 0x880) = uVar5;
          uVar6 = (uint)*(undefined8 *)(param_4 + 0x898);
          uVar5 = *(undefined8 *)(param_4 + 0x890);
        }
        *(ulong *)(param_2 + 0x898) = (ulong)uVar6;
        *(undefined8 *)(param_2 + 0x890) = uVar5;
      }
    }
  }
  return;
}


