/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004103f0; name: FUN_004103f0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004103f0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined *local_98;
  uint local_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  long *local_68;
  
  iVar4 = FUN_0040ae20();
  if (iVar4 == 1) {
    plVar11 = (long *)(param_1 + 0x80);
    puVar9 = (undefined8 *)*plVar11;
    if (puVar9 != (undefined8 *)0x0) {
      if (*(uint *)(param_1 + 0x88) != 0) {
        lVar12 = (ulong)*(uint *)(param_1 + 0x88) * 0x18;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar12 = lVar12 + -0x18;
          puVar9 = puVar9 + 3;
        } while (lVar12 != 0);
        puVar9 = (undefined8 *)*plVar11;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar9);
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x78) + 0x110);
    if (uVar3 == 0) {
LAB_00410664:
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
      if (*(long *)(param_1 + 0x10) == 0) {
        iVar4 = FUN_00410790(param_1,1);
        if (iVar4 == 1) {
          local_98 = (undefined *)0x0;
          local_90 = local_90 & 0xffffff00;
          *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
          if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
            uVar6 = FUN_00410b00(param_1);
            local_68 = (long *)FUN_00410bb0(param_1,uVar6);
            if ((local_68 != (long *)0x0) &&
               (FUN_00410d00(param_1,uVar6,&local_98,&local_68), local_68 != (long *)0x0)) {
              (**(code **)(*local_68 + 0x80))();
            }
          }
          iVar4 = 1;
        }
      }
      else {
        iVar4 = FUN_00410790(param_1,0);
      }
    }
    else {
      lVar12 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar3 * 0x18);
      *plVar11 = lVar12;
      if (lVar12 != 0) {
        *(uint *)(param_1 + 0x8c) = uVar3;
        lVar12 = 0;
        uVar16 = 0;
        puVar1 = PTR_DAT_02712ba8 + 0x10;
        do {
          FUN_004b7930(&local_98);
          local_88 = 0;
          uStack_8c = 0xffffffff;
          uVar2 = *(uint *)(param_1 + 0x88);
          uVar8 = *(uint *)(param_1 + 0x8c);
          local_98 = puVar1;
          if (uVar2 < uVar8) {
LAB_00410520:
            if (uVar2 < uVar8) {
              uVar2 = *(uint *)(param_1 + 0x88);
              lVar14 = *(long *)(param_1 + 0x80);
              *(uint *)(param_1 + 0x88) = uVar2 + 1;
              plVar13 = (long *)(lVar14 + (ulong)uVar2 * 0x18);
              if (plVar13 != (long *)0x0) {
                FUN_004b7930(plVar13);
                *plVar13 = (long)(PTR_DAT_02712ba8 + 0x10);
                lVar14 = lVar14 + (ulong)uVar2 * 0x18;
                *(undefined4 *)(lVar14 + 0xc) = 0xffffffff;
                *(undefined8 *)(lVar14 + 0x10) = 0;
                *(ulong *)(lVar14 + 0x10) = local_88;
                *(ulong *)(lVar14 + 8) = CONCAT44(uStack_8c,local_90);
              }
            }
          }
          else {
            uVar7 = FUN_00413100(plVar11,1);
            if ((uVar7 & 1) != 0) {
              uVar8 = *(uint *)(param_1 + 0x8c);
              goto LAB_00410520;
            }
          }
          local_98 = PTR_DAT_02712ba8 + 0x10;
          FUN_004b7970(&local_98);
          FUN_004b7950(&local_98);
          lVar14 = *(long *)(param_1 + 0x80) + lVar12;
          *(undefined4 *)(lVar14 + 8) = 0;
          *(int *)(lVar14 + 0xc) = (int)uVar16;
          *(long *)(lVar14 + 0x10) = param_1;
          lVar10 = *(long *)(param_1 + 0x78);
          if (*(long *)(lVar10 + 0x130) == 0) {
            uVar6 = 0;
            lVar10 = *(long *)(lVar10 + 0x138);
            if (lVar10 == 0) goto LAB_004105e0;
LAB_004105cc:
            uVar15 = *(undefined1 *)(lVar10 + uVar16);
          }
          else {
            uVar6 = *(undefined4 *)(*(long *)(lVar10 + 0x130) + uVar16 * 4);
            lVar10 = *(long *)(lVar10 + 0x138);
            if (lVar10 != 0) goto LAB_004105cc;
LAB_004105e0:
            uVar15 = 0;
          }
          iVar4 = FUN_004b79b0(lVar14,uVar6,uVar15);
          if (iVar4 != 1) {
            return iVar4;
          }
          local_98 = *(undefined **)(*(long *)(param_1 + 0x60) + 0x30);
          local_90 = *(uint *)(*(long *)(param_1 + 0x60) + 0x2c);
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0xff;
          local_78 = 0xff;
          local_70 = 0;
          iVar5 = FUN_004b7a70(lVar14,&local_98,uVar6,uVar15);
          uVar16 = uVar16 + 1;
          iVar4 = 0x2ca33bdb;
          if (iVar5 != 0) {
            iVar4 = iVar5;
          }
          *(int *)(lVar14 + 8) = iVar4;
          if (uVar3 <= uVar16) goto LAB_00410664;
          lVar12 = lVar12 + 0x18;
        } while( true );
      }
      iVar4 = 0x34;
    }
  }
  return iVar4;
}


