/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119c520; name: FUN_0119c520
 */


uint FUN_0119c520(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_e8 [8];
  char local_e0 [16];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long *local_90;
  long local_88;
  long local_80;
  
  uVar4 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    goto LAB_0119c88c;
  }
  plVar13 = *(long **)(param_1 + 0x80);
  puVar5 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x38,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  FUN_011aaee0(puVar5);
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  FUN_0120e660(local_e0,*(undefined8 *)PTR_DAT_027185f8);
  if (local_e0[0] == '\0') {
    uVar3 = 0;
  }
  else {
    if (local_88 != 0) {
      lVar6 = local_88 << 3;
      plVar14 = local_90;
      do {
        lVar11 = *(long *)(param_1 + 0x278);
        lVar7 = *plVar14;
        plVar12 = (long *)(param_1 + 0x278);
        if (((((lVar11 == 0 || lVar11 != lVar7) &&
              ((lVar11 = *(long *)(param_1 + 0x288), lVar11 == 0 ||
               (plVar12 = (long *)(param_1 + 0x288), lVar11 != lVar7)))) &&
             ((lVar11 = *(long *)(param_1 + 0x298), lVar11 == 0 ||
              (plVar12 = (long *)(param_1 + 0x298), lVar11 != lVar7)))) &&
            ((((lVar11 = *(long *)(param_1 + 0x2a8), lVar11 == 0 ||
               (plVar12 = (long *)(param_1 + 0x2a8), lVar11 != lVar7)) &&
              ((lVar11 = *(long *)(param_1 + 0x2b8), lVar11 == 0 ||
               (plVar12 = (long *)(param_1 + 0x2b8), lVar11 != lVar7)))) &&
             ((lVar11 = *(long *)(param_1 + 0x2c8), lVar11 == 0 ||
              (plVar12 = (long *)(param_1 + 0x2c8), lVar11 != lVar7)))))) &&
           ((lVar11 = *(long *)(param_1 + 0x2d8), lVar11 == 0 ||
            (plVar12 = (long *)(param_1 + 0x2d8), lVar11 != lVar7)))) {
          lVar11 = *(long *)(param_1 + 0x2e8);
          plVar12 = (long *)(param_1 + 0x2e8);
          if (lVar11 != lVar7 || lVar11 == 0) {
            plVar12 = (long *)(param_1 + 0x2f8);
          }
          if (plVar12 == (long *)(param_1 + 0x2f8)) {
            uVar3 = 0;
            goto joined_r0x0119c8b8;
          }
        }
        bVar1 = *(byte *)(plVar12 + 1);
        FUN_0075efb0(auStack_e8,plVar13,0,1);
        piVar8 = (int *)puVar5[5];
        if (piVar8 == (int *)0x0) {
          iVar10 = *(int *)((long)puVar5 + 0x24);
LAB_0119c758:
          FUN_00824290(puVar5 + 3,iVar10 + 1);
          piVar8 = (int *)puVar5[5];
          iVar10 = *piVar8;
LAB_0119c76c:
          *piVar8 = iVar10 + 1;
          lVar7 = FUN_011a1000(0,puVar5[3]);
          iVar10 = *(int *)(puVar5 + 4);
          *(int *)(puVar5 + 4) = iVar10 + 1;
          *(long *)(puVar5[5] + (long)iVar10 * 8 + 8) = lVar7;
        }
        else {
          iVar2 = *(int *)(puVar5 + 4);
          iVar10 = *piVar8;
          if (iVar10 <= iVar2) {
            if (iVar10 == *(int *)((long)puVar5 + 0x24)) goto LAB_0119c758;
            goto LAB_0119c76c;
          }
          *(int *)(puVar5 + 4) = iVar2 + 1;
          lVar7 = *(long *)(piVar8 + (long)iVar2 * 2 + 2);
        }
        FUN_0075f0a0(auStack_e8);
        *(uint *)(lVar7 + 0x20) = (uint)bVar1;
        lVar6 = lVar6 + -8;
        *(long *)(lVar7 + 0x18) = *plVar14;
        plVar14 = plVar14 + 1;
      } while (lVar6 != 0);
    }
    uVar3 = FUN_0119c8d0(*(undefined8 *)(param_1 + 0x88),puVar5,5);
joined_r0x0119c8b8:
    if (local_e0[0] != '\0') {
      if (local_80 != 0) {
        (**(code **)(*local_d0 + 0x18))(local_d0,local_90,local_80 << 3,8);
      }
      if (alStack_c0 == local_a0) {
        pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_0119c838:
        (*pcVar9)();
      }
      else if (local_a0 != (long *)0x0) {
        pcVar9 = *(code **)(*local_a0 + 0x28);
        goto LAB_0119c838;
      }
      local_e0[0] = '\0';
    }
  }
  FUN_0075efb0(local_e0,plVar13,0,1);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*plVar13 + 0x18))(plVar13,puVar5,0x38,8);
  }
  FUN_0075f0a0(local_e0);
LAB_0119c88c:
  return uVar3 & 1;
}


