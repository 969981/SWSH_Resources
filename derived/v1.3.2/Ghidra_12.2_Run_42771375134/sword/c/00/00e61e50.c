/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61e50; name: FUN_00e61e50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00e61e50(float param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [96];
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  int local_64;
  
  if (*(long *)(param_2 + 0xb20) == 0) {
    uVar9 = 0;
    goto LAB_00e62208;
  }
  lVar13 = *(long *)(param_2 + 0xc30);
  if (lVar13 != 0) {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 != 0) {
      uVar10 = FUN_015b5320(lVar13);
      lVar13 = lVar13 + -0x50;
      if ((uVar10 & 1) == 0) {
        lVar13 = 0;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14);
    if (lVar13 != 0) {
      lVar12 = *(long *)(*(long *)(param_2 + 0xb20) + 0x80);
joined_r0x00e61f8c:
      if (lVar12 == 0) {
LAB_00e61f90:
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = *(undefined8 **)(lVar12 + 0x60);
        if (puVar15 != (undefined8 *)0x0) {
          plVar14 = (long *)(**(code **)*puVar15)(puVar15);
          if (((*PTR_DAT_02715280 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_02715280), iVar8 != 0)) {
            uVar11 = FUN_01590a70();
            *(undefined8 *)PTR_DAT_02715288 = uVar11;
            __cxa_guard_release(PTR_DAT_02715280);
          }
          for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            if (plVar14 == (long *)PTR_DAT_02715288) {
              puVar15 = puVar15 + -10;
              goto LAB_00e61f94;
            }
          }
          goto LAB_00e61f90;
        }
      }
LAB_00e61f94:
      local_98 = puVar15[0x15];
      local_88 = puVar15[0x17];
      uVar3 = *(undefined1 *)(puVar15 + 0xc);
      uVar2 = *(undefined4 *)((long)puVar15 + 0x1b4);
      uVar4 = *(undefined1 *)(puVar15 + 0x36);
      uVar5 = *(undefined1 *)(puVar15 + 0x43);
      cVar6 = *(char *)(param_2 + 0xbd1);
      uVar17 = puVar15[0xf];
      uVar11 = puVar15[0xe];
      local_a0 = puVar15[0x14];
      local_90 = puVar15[0x16];
      uStack_a8 = param_3[1];
      local_b0 = *param_3;
      if ((cVar6 == '\0') && (*(char *)(*(long *)PTR_DAT_02717c48 + 0x352) != '\0')) {
        local_140 = *(undefined1 **)PTR_DAT_0271fc60;
        uVar9 = 1;
        local_138 = *(code **)PTR_DAT_0271fc80;
        local_c0 = CONCAT44((float)((ulong)local_b0 >> 0x20) + (float)((ulong)_DAT_01d4b230 >> 0x20)
                            ,(float)local_b0 + (float)_DAT_01d4b230);
        uStack_b8 = CONCAT44((float)((ulong)uStack_a8 >> 0x20) +
                             (float)((ulong)_UNK_01d4b238 >> 0x20),
                             (float)uStack_a8 + (float)_UNK_01d4b238);
        local_64 = 0;
        uVar10 = FUN_006c8060(*(undefined8 *)(param_2 + 0x288),&local_b0,&local_c0,2,&local_140,2,0,
                              0,&local_64,0,1,0);
        if ((0 < local_64) || ((uVar10 & 1) != 0)) goto LAB_00e62208;
      }
      local_140 = (undefined1 *)0xcbf29ce484222645;
      if (cVar6 != '\0') {
        local_140 = *(undefined1 **)PTR_DAT_0271fc60;
      }
      uVar9 = 1;
      iVar8 = FUN_006c8060(*(undefined8 *)(param_2 + 0x288),&local_b0,lVar13 + 0xb0,2,0,0,&local_140
                           ,1,0,0,1,0);
      if (iVar8 < 1) {
        if (param_1 <= 0.0) {
          param_1 = (float)local_90;
        }
        FUN_00dc7290(param_1,*(undefined8 *)(param_2 + 0xb20),&local_a0);
        *(undefined1 *)(puVar15 + 0xc) = 1;
        *(undefined4 *)((long)puVar15 + 0x1b4) = uVar2;
        *(undefined1 *)(puVar15 + 0x36) = 0;
        *(undefined1 *)(puVar15 + 0x43) = 1;
        puVar15[0xf] = uStack_a8;
        puVar15[0xe] = local_b0;
        *(undefined1 *)(param_2 + 0xbd1) = 0;
        FUN_00e60bb0(param_2,cVar6 != '\0');
        uVar16 = *(undefined8 *)(param_2 + 0x288);
        lVar13 = puVar15[0xb];
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        local_140 = &LAB_00e637b0;
        local_138 = FUN_00e637c0;
        local_130 = &LAB_00e637d0;
        puStack_128 = &LAB_00e637e0;
        local_c0 = lVar13;
        uVar9 = FUN_006c7630(uVar16,&local_c0,&local_140,0);
        pcVar7 = local_138;
        if (local_138 != (code *)0x0) {
          local_130 = (undefined1 *)0x0;
          puStack_128 = (undefined1 *)0x0;
          local_140 = (undefined1 *)0x0;
          local_138 = (code *)0x0;
          (*pcVar7)(auStack_120);
        }
        if (local_c0 != 0) {
          (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
          local_c0 = 0;
        }
        FUN_00dc7290(local_90 & 0xffffffff,*(undefined8 *)(param_2 + 0xb20),&local_a0);
        *(undefined1 *)(puVar15 + 0xc) = uVar3;
        *(undefined4 *)((long)puVar15 + 0x1b4) = uVar2;
        *(undefined1 *)(puVar15 + 0x36) = uVar4;
        puVar15[0xf] = uVar17;
        puVar15[0xe] = uVar11;
        *(undefined1 *)(puVar15 + 0x43) = uVar5;
        *(undefined1 *)(param_2 + 0xbd1) = 0;
        FUN_00e60bb0(param_2,cVar6 != '\0');
        FUN_00e46690(puVar15);
      }
      goto LAB_00e62208;
    }
  }
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (plVar14 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0); plVar14 != plVar1;
      plVar14 = plVar14 + 1) {
    lVar13 = *plVar14;
    uVar10 = FUN_015b5320(lVar13 + 0x50);
    if (((uVar10 & 1) != 0) &&
       (uVar10 = (**(code **)(*(long *)*plVar14 + 0x88))(), (uVar10 & 1) == 0)) {
      lVar12 = *(long *)(*(long *)(param_2 + 0xb20) + 0x80);
      goto joined_r0x00e61f8c;
    }
  }
  uVar9 = 1;
LAB_00e62208:
  return uVar9 & 1;
}


