/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cf3d0; name: FUN_001cf3d0
 */


void FUN_001cf3d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  char local_70 [8];
  undefined2 local_68;
  
  if (*(int *)(param_1 + 0x2400) != 0) {
    do {
      FUN_003e9a10(param_1 + 0x10);
      iVar4 = *(int *)(param_1 + 0x2400) + -1;
      *(int *)(param_1 + 0x2400) = iVar4;
    } while (iVar4 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x2418);
  if (uVar3 != 0) {
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x7a4) = *(undefined8 *)(param_1 + 0x23e8);
      *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_1 + 0x23f0);
      *(undefined4 *)(param_1 + 0x7b0) = 1;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      FUN_003de820(*(undefined4 *)(param_1 + 0x23f4),param_1 + 0x10);
      uVar3 = *(uint *)(param_1 + 0x2418);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x111c) = *(undefined4 *)(param_1 + 0x23f8);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      puVar7 = (uint *)(param_1 + 0x22f0);
      lVar5 = -0x1f;
      uVar8 = 0;
      do {
        lVar2 = param_1 + uVar8 * 4;
        uVar1 = uVar8 + 1;
        if (*(int *)(lVar2 + 0x22ec) != 0) {
          uVar3 = 1 << (ulong)((uint)uVar8 & 0x1f);
          puVar9 = puVar7;
          lVar10 = lVar5;
          do {
            local_68 = 0;
            if (uVar8 < lVar10 + 0x20U) {
              uVar6 = *(uint *)(lVar2 + 0x22ec) & 1 << (ulong)((int)lVar10 + 0x20U & 0x1f);
            }
            else {
              uVar6 = *puVar9 & uVar3;
            }
            if (uVar6 != 0) {
              uVar6 = (int)lVar10 + 0x20;
              local_68 = CONCAT11((char)((puVar9[0x1f] & uVar3) >> (ulong)((uint)uVar8 & 0x1f)),
                                  (char)((*(uint *)(lVar2 + 0x2368) & 1 << (ulong)(uVar6 & 0x1f)) >>
                                        (ulong)(uVar6 & 0x1f)));
              FUN_003e9290(param_1 + 0x10,uVar8 & 0xffffffff,lVar10 + 0x20U,&local_68);
            }
            lVar10 = lVar10 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar10 != 0);
        }
        lVar5 = lVar5 + 1;
        puVar7 = puVar7 + 1;
        uVar8 = uVar1;
      } while (uVar1 != 0x1f);
                    /* WARNING: Subroutine does not return */
      memset((void *)(param_1 + 0x22ec),0,0x7c);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      FUN_003dc480(param_1 + 0x10,*(undefined4 *)(param_1 + 0x23fc));
      uVar3 = *(uint *)(param_1 + 0x2418);
    }
    if (((uVar3 >> 5 & 1) != 0) && (uVar6 = *(uint *)(param_1 + 0x2410), uVar6 != 0)) {
      lVar5 = *(long *)(param_1 + 0x2408);
      uVar8 = 0;
      do {
        if (*(char *)(lVar5 + uVar8) != -1) {
          local_70[0] = *(char *)(lVar5 + uVar8);
          FUN_003e9ae0(param_1 + 0x10,uVar8 & 0xffffffff,local_70);
          lVar5 = *(long *)(param_1 + 0x2408);
          *(undefined1 *)(lVar5 + uVar8) = 0xff;
          uVar6 = *(uint *)(param_1 + 0x2410);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
      uVar3 = *(uint *)(param_1 + 0x2418);
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar8 = 0;
      do {
        if (*(char *)(param_1 + 0x22ac + uVar8) != '\0') {
          FUN_003e9370(*(undefined4 *)(param_1 + 0x22ac + uVar8 * 4 + -0x94),param_1 + 0x10,
                       uVar8 & 0xffffffff);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x25);
                    /* WARNING: Subroutine does not return */
      memset((void *)(param_1 + 0x22ac),0,0x25);
    }
    if ((uVar3 >> 7 & 1) != 0) {
      FUN_003e93d0(param_1 + 0x10,param_1 + 0x22d4);
    }
    *(undefined4 *)(param_1 + 0x2418) = 0;
  }
  return;
}


