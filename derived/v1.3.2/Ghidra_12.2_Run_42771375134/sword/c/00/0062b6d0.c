/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062b6d0; name: FUN_0062b6d0
 */


void FUN_0062b6d0(long param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_60;
  int local_54;
  
  lVar7 = *(long *)(param_1 + 0xc0);
  lVar11 = *(long *)(param_1 + 0x478);
  uVar8 = *(undefined8 *)(lVar7 + 0x38);
  *(undefined1 *)(lVar11 + 0x30) = 1;
  local_54 = (**(code **)(param_1 + 0x340))(param_1,0x61766172,lVar7,&local_60);
  if ((local_54 == 0) && (local_54 = FUN_006081f0(lVar7,local_60), local_54 == 0)) {
    lVar3 = FUN_00608440(lVar7);
    uVar4 = FUN_00608440(lVar7);
    if ((lVar3 == 0x10000) && (uVar4 == **(uint **)(lVar11 + 0x18))) {
      puVar5 = (ushort *)FUN_006029c0(uVar8,0x10,0,uVar4,0,&local_54);
      *(ushort **)(lVar11 + 0x38) = puVar5;
      if ((local_54 == 0) && (0 < (long)uVar4)) {
        uVar12 = 0;
        do {
          uVar1 = FUN_00608400(lVar7);
          *puVar5 = uVar1;
          if (local_60 < (ulong)uVar1 * 4) {
LAB_0062b84c:
            lVar3 = *(long *)(lVar11 + 0x38);
            if ((int)uVar12 != 0) {
              lVar9 = (uVar12 & 0xffffffff) + 1;
              lVar10 = (uVar12 & 0xffffffff) * 0x10 + -8;
              do {
                FUN_006028c0(uVar8,*(undefined8 *)(lVar3 + lVar10));
                *(undefined8 *)(*(long *)(lVar11 + 0x38) + lVar10) = 0;
                lVar3 = *(long *)(lVar11 + 0x38);
                lVar9 = lVar9 + -1;
                lVar10 = lVar10 + -0x10;
              } while (1 < lVar9);
            }
            FUN_006028c0(uVar8);
            *(undefined8 *)(lVar11 + 0x38) = 0;
            break;
          }
          uVar6 = FUN_006029c0(uVar8,0x10,0,(ulong)uVar1,0,&local_54);
          *(undefined8 *)(puVar5 + 4) = uVar6;
          if (local_54 != 0) goto LAB_0062b84c;
          if (*puVar5 != 0) {
            lVar3 = 0;
            uVar13 = 0;
            do {
              uVar2 = FUN_00608400(lVar7);
              *(long *)(*(long *)(puVar5 + 4) + lVar3) =
                   (long)(int)(-(uVar2 >> 0xf & 1) & 0xfffc0000 | (uVar2 & 0xffff) << 2);
              uVar2 = FUN_00608400(lVar7);
              uVar13 = uVar13 + 1;
              lVar9 = *(long *)(puVar5 + 4) + lVar3;
              lVar3 = lVar3 + 0x10;
              *(long *)(lVar9 + 8) =
                   (long)(int)(-(uVar2 >> 0xf & 1) & 0xfffc0000 | (uVar2 & 0xffff) << 2);
            } while (uVar13 < *puVar5);
          }
          uVar12 = uVar12 + 1;
          puVar5 = puVar5 + 8;
        } while ((long)uVar12 < (long)uVar4);
      }
    }
    FUN_00608390(lVar7);
  }
  return;
}


