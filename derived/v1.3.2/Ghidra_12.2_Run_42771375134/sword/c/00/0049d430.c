/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d430; name: FUN_0049d430
 */


float FUN_0049d430(long *param_1,long param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [48];
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_DAT_02712dc0;
  if (*(int *)(param_2 + 0x58) == 0) {
    fVar12 = 0.0;
  }
  else {
    lVar10 = *(long *)(param_2 + 0x50);
    fVar12 = 0.0;
    do {
      memcpy(auStack_98,param_3,0x30);
      uVar1 = *(uint *)(lVar10 + 4);
      iVar2 = *(int *)(param_2 + 8);
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar1 / uVar3;
        }
        for (puVar9 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar4 * uVar3) * 8);
            puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
          if (*puVar9 == uVar1) {
            puVar9 = (uint *)FUN_00465870(puVar9 + 8,auStack_98);
            if (puVar9 == (uint *)0x0) {
              bVar5 = false;
              goto LAB_0049d558;
            }
            local_68 = *puVar9;
            goto LAB_0049d5a4;
          }
        }
      }
      if (*(int *)(param_2 + 0x48) == 1) {
        bVar5 = false;
LAB_0049d518:
        uVar8 = FUN_004784d0(*(undefined8 *)puVar6,uVar1,auStack_98,&local_68);
        if ((uVar8 & 1) == 0) {
LAB_0049d558:
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 != 0) {
            uVar3 = *(uint *)(lVar10 + 4);
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = uVar3 / uVar1;
            }
            for (puVar9 = *(uint **)(*param_1 + (ulong)(uVar3 - uVar4 * uVar1) * 8);
                puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
              if (*puVar9 == uVar3) {
                local_68 = puVar9[4];
                goto joined_r0x0049d48c;
              }
            }
          }
          local_68 = 0;
        }
joined_r0x0049d48c:
        if (!bVar5) {
LAB_0049d5a4:
          local_64 = 0;
          fVar11 = (float)FUN_0042e770(local_68,lVar10 + 8,0,&local_64);
          fVar12 = fVar11 + fVar12;
        }
      }
      else {
        bVar7 = iVar2 == 7;
        bVar5 = iVar2 == 0 || bVar7;
        if ((!bVar7) && (iVar2 != 0)) goto LAB_0049d518;
        local_68 = 0x3f800000;
        if (iVar2 != 0 && !bVar7) goto LAB_0049d5a4;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar10 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x18);
  }
  return fVar12;
}


