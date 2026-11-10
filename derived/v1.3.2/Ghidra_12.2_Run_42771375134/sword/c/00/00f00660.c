/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f00660; name: FUN_00f00660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f00660(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  ulong local_e0;
  ulong *puStack_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)PTR_DAT_027194e8;
  FUN_00dfd500(lVar11);
  lVar13 = *(long *)(lVar11 + 0x60);
  if ((lVar13 != 0) &&
     ((**(code **)(*(long *)(lVar13 + 0x48) + 0x10))((long *)(lVar13 + 0x48)),
     *(int *)(lVar13 + 0x54) != 0)) {
    puVar12 = *(undefined8 **)(lVar13 + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      plVar5 = (long *)(**(code **)*puVar12)(puVar12);
      if (((*PTR_DAT_0271ee60 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0271ee60), iVar4 != 0)) {
        uVar7 = FUN_00a89c30();
        *(undefined8 *)PTR_DAT_0271ee68 = uVar7;
        __cxa_guard_release(PTR_DAT_0271ee60);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)PTR_DAT_0271ee68) {
          puVar12 = puVar12 + -10;
          goto LAB_00f00710;
        }
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_00f00710:
    FUN_00dfb4a0(&local_e0,lVar11);
    uStack_68 = 0;
    local_70 = (ulong)local_b0;
    uStack_98 = _UNK_01d4a438;
    local_a0 = _DAT_01d4a430;
    local_80 = 0xbe20d97cbe32b8c3;
    uStack_88 = _UNK_01d4b278;
    local_90 = _DAT_01d4b270;
    FUN_00e652f0(puVar12,&local_a0);
    uStack_98 = _UNK_01d4a208;
    local_a0 = _DAT_01d4a200;
    uStack_88 = _UNK_01d49ff8;
    local_90 = _DAT_01d49ff0;
    local_80 = 0xbe20d97c3e8525ce;
    uStack_68 = CONCAT44(0x3bb60b61,(undefined4)uStack_68);
    FUN_00dfdde0(lVar11,&local_a0);
  }
  lVar11 = *(long *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(lVar11 + 0xb8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(lVar11 + 0xb0);
  uVar7 = *(undefined8 *)(lVar11 + 0xa8);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(lVar11 + 0xa0);
  uVar3 = _UNK_01d4a218;
  uVar2 = _DAT_01d4a210;
  *(undefined8 *)(param_1 + 0x208) = uVar7;
  *(undefined8 *)(lVar11 + 0xb8) = uVar3;
  *(undefined8 *)(lVar11 + 0xb0) = uVar2;
  *(undefined1 *)(lVar11 + 0xc0) = 1;
  lVar11 = *(long *)(param_1 + 0x1e0);
  auVar14 = FUN_00a92cd0(DAT_01d4c0fc,0,0);
  *(undefined1 *)(lVar11 + 0xc0) = 1;
  *(undefined1 (*) [16])(lVar11 + 0xa0) = auVar14;
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x218);
  *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0x218) = 0;
  if (0 < *(int *)(param_1 + 0x214)) {
    lVar11 = 0;
    do {
      piVar8 = (int *)(param_1 + lVar11 * 4 + 0xf0);
      iVar4 = *piVar8;
      if (0x19 < iVar4 - 1U) {
        iVar4 = 4;
        *piVar8 = 4;
      }
      lVar9 = *(long *)(*(long *)(param_1 + lVar11 * 8 + 0x108) + 0x410);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          uVar6 = FUN_00a8cbe0(lVar9);
          lVar9 = lVar9 + -0x50;
          if ((uVar6 & 1) == 0) {
            lVar9 = 0;
          }
        }
      }
      snprintf((char *)&local_a0,0x20,"%s%02d",*(char **)(param_1 + 0x238),iVar4);
      uVar6 = local_a0 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      if ((char)local_a0 != '\0') {
        local_e0 = 0xcbf29ce484222645;
        pbVar10 = (byte *)((ulong)&local_a0 | 1);
        do {
          local_e0 = (local_e0 ^ uVar6) * 0x100000001b3;
          bVar1 = *pbVar10;
          uVar6 = (ulong)bVar1;
          pbVar10 = pbVar10 + 1;
        } while (bVar1 != 0);
      }
      local_d0 = 0x1f;
      local_c8 = 0;
      puStack_d8 = &local_a0;
      iVar4 = FUN_0072e390(*(undefined8 *)(lVar9 + 0x360),&local_e0);
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        local_c8 = 0;
      }
      if (-1 < iVar4) {
        FUN_0072e410(*(undefined8 *)(lVar9 + 0x360),iVar4,1,0);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x214));
  }
  FUN_00f00bf0(param_1);
  FUN_00f00d00(param_1);
  FUN_00efebc0(param_1);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  return;
}


