/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406e70; name: FUN_00406e70
 */


void FUN_00406e70(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_68;
  long local_60;
  char local_58 [4];
  undefined4 local_54;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_02712ac8;
  puVar8 = *(undefined8 **)PTR_DAT_02712ac8;
  local_60 = 0;
  plVar5 = puVar8;
  while ((local_68 = (long)plVar5, local_68 != 0 && (local_68 + 8 != param_2))) {
    local_60 = local_68;
    plVar5 = (long *)*(long *)local_68;
  }
  if ((*(byte *)(local_68 + 0x10) & 1) == 0) {
    uVar1 = *(undefined4 *)(local_68 + 8);
    if (*(long *)(PTR_DAT_02712ab8 + 8) != 0) {
      lVar4 = *(long *)(PTR_DAT_02712ab8 + 8);
      lVar13 = 0;
      lVar14 = 0;
LAB_00406ee8:
      do {
        lVar12 = lVar4;
        if ((*(byte *)(lVar12 + 0x5a) & 0x11) == 1) {
          local_58[0] = '\0';
          lVar7 = FUN_0040cb90(*(undefined8 *)(lVar12 + 0x60),uVar1,local_58,&local_54,&local_48);
          if ((local_58[0] != '\0') && ((lVar13 == 0 || (lVar7 < lVar14)))) {
            unaff_x21 = local_48;
            lVar4 = *(long *)(lVar12 + 0x70);
            lVar13 = lVar12;
            lVar14 = lVar7;
            unaff_w22 = local_54;
            if (*(long *)(lVar12 + 0x70) == 0) break;
            goto LAB_00406ee8;
          }
        }
        lVar4 = *(long *)(lVar12 + 0x70);
      } while (*(long *)(lVar12 + 0x70) != 0);
      if (((long)(ulong)*(ushort *)PTR_DAT_02712ac0 < lVar14) &&
         (iVar6 = FUN_0040ce80(*(undefined8 *)(lVar13 + 0x60),param_2,unaff_w22,unaff_x21),
         iVar6 == 1)) {
        return;
      }
    }
    FUN_00407060(uVar1,&local_68);
  }
  else {
    *(byte *)(local_68 + 0x10) = *(byte *)(local_68 + 0x10) & 0xfd;
    puVar2 = PTR_DAT_02712a90;
    if (puVar8 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      do {
        while (puVar9 = puVar8, puVar8 = (undefined8 *)*puVar9,
              (*(byte *)(puVar9 + 2) >> 1 & 1) == 0) {
          puVar10 = (undefined8 *)puVar3;
          if (*(undefined8 **)puVar3 != puVar9) {
            puVar10 = puVar11;
          }
          *puVar10 = puVar8;
          if (*(undefined8 **)(puVar3 + 8) == puVar9) {
            *(undefined8 **)(puVar3 + 8) = puVar11;
            puVar10 = *(undefined8 **)(puVar3 + 0x18);
            if (puVar10 <= puVar9) goto LAB_00406fdc;
LAB_0040701c:
            FUN_00404870(*(undefined4 *)puVar2);
          }
          else {
            puVar10 = *(undefined8 **)(puVar3 + 0x18);
            if (puVar9 < puVar10) goto LAB_0040701c;
LAB_00406fdc:
            if (puVar10 + (ulong)*(uint *)(puVar3 + 0x20) * 3 <= puVar9) goto LAB_0040701c;
            *puVar9 = *(undefined8 *)(puVar3 + 0x10);
            *(undefined8 **)(puVar3 + 0x10) = puVar9;
          }
          *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + -1;
          if (puVar8 == (undefined8 *)0x0) {
            return;
          }
        }
        puVar11 = puVar9;
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
  return;
}


