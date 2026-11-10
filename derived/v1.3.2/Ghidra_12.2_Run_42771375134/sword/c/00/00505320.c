/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00505320; name: FUN_00505320
 */


int FUN_00505320(long param_1)

{
  uint uVar1;
  size_t __n;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_02712e28;
  do {
    if (*(int *)(param_1 + 0x68) == 0) {
      bVar2 = *(byte *)(param_1 + 0x82);
      if ((bVar2 & 1) != 0) {
        return 0x11;
      }
      if ((bVar2 >> 1 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x88))();
        iVar4 = FUN_004ccc30(param_1);
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar2 & 0xfd;
        iVar4 = FUN_004ccc30(param_1);
      }
      if (iVar4 != 0x2d) {
        return iVar4;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x144);
    uVar7 = (ulong)uVar6;
    if (uVar6 < 2) {
      uVar9 = *(uint *)(param_1 + 0x68);
      if (uVar9 != 0) {
        __n = (ulong)uVar9;
        if (2 - uVar7 <= (ulong)uVar9) {
          __n = 2 - uVar7;
        }
        if (__n == 2) {
          lVar10 = *(long *)(param_1 + 0x60);
          *(long *)(param_1 + 0x138) = lVar10;
        }
        else {
          if (*(char *)(param_1 + 0x148) == '\0') {
            lVar10 = FUN_00404750(*(undefined4 *)puVar3,(ulong)*(ushort *)(param_1 + 0x10c) + 2,8);
            *(long *)(param_1 + 0x138) = lVar10;
            if (lVar10 == 0) {
              return 0x34;
            }
            uVar7 = (ulong)*(uint *)(param_1 + 0x144);
            *(undefined1 *)(param_1 + 0x148) = 1;
          }
          else {
            lVar10 = *(long *)(param_1 + 0x138);
          }
          memcpy((void *)(lVar10 + uVar7),*(void **)(param_1 + 0x60),__n);
          uVar6 = *(uint *)(param_1 + 0x144);
          lVar10 = *(long *)(param_1 + 0x60);
          uVar9 = *(uint *)(param_1 + 0x68);
        }
        iVar4 = (int)__n;
        *(uint *)(param_1 + 0x68) = uVar9 - iVar4;
        *(uint *)(param_1 + 0x144) = uVar6 + iVar4;
        *(size_t *)(param_1 + 0x60) = lVar10 + __n;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar4;
        if (uVar6 + iVar4 == 2) goto LAB_00505494;
      }
    }
    else {
LAB_00505494:
      uVar6 = *(uint *)(param_1 + 0x140);
      if (uVar6 == 0) {
        puVar5 = *(ushort **)(param_1 + 0x138);
        if ((*(uint *)(param_1 + 0x68) < *puVar5 + 8) && (*(char *)(param_1 + 0x148) == '\0')) {
          puVar5 = (ushort *)FUN_00404750(*(undefined4 *)puVar3,(ulong)*puVar5 + 10,8);
          if (puVar5 == (ushort *)0x0) {
            return 0x34;
          }
          *puVar5 = **(ushort **)(param_1 + 0x138);
          uVar6 = *(uint *)(param_1 + 0x140);
          *(ushort **)(param_1 + 0x138) = puVar5;
          *(undefined1 *)(param_1 + 0x148) = 1;
          uVar9 = (uint)*puVar5;
          if (uVar6 < *puVar5) {
LAB_005054ac:
            uVar8 = *(uint *)(param_1 + 0x68);
            if (uVar8 != 0) {
              uVar1 = uVar8;
              if (uVar9 - uVar6 <= uVar8) {
                uVar1 = uVar9 - uVar6;
              }
              if (*(char *)(param_1 + 0x148) != '\0') {
                memcpy((void *)((long)puVar5 + (ulong)uVar6 + 2),*(void **)(param_1 + 0x60),
                       (ulong)uVar1);
                uVar6 = *(uint *)(param_1 + 0x140);
                uVar8 = *(uint *)(param_1 + 0x68);
              }
              *(uint *)(param_1 + 0x140) = uVar6 + uVar1;
              *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar1;
              *(uint *)(param_1 + 0x68) = uVar8 - uVar1;
              *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar1;
            }
          }
        }
        else {
          uVar6 = 0;
          uVar9 = (uint)*puVar5;
          if (uVar9 != 0) goto LAB_005054ac;
        }
      }
      else {
        puVar5 = *(ushort **)(param_1 + 0x138);
        uVar9 = (uint)*puVar5;
        if (uVar6 < *puVar5) goto LAB_005054ac;
      }
    }
    if ((*(int *)(param_1 + 0x144) == 2) &&
       (*(uint *)(param_1 + 0x140) == (uint)**(ushort **)(param_1 + 0x138))) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      return 0x2d;
    }
  } while( true );
}


