/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f30d0; name: FUN_008f30d0
 */


void FUN_008f30d0(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *__src;
  long lVar8;
  uint uVar9;
  int *piVar10;
  uint local_24;
  
  piVar10 = *(int **)(param_1 + 0x88);
  if (*(char *)((long)piVar10 + 0x3bb) == '\x01') {
    bVar4 = FUN_008f3650(param_1);
    *(byte *)(*(long *)(param_1 + 0x88) + 0xb40) =
         *(byte *)(*(long *)(param_1 + 0x88) + 0xb40) & 0xfd | (bVar4 & 1) << 1;
    if ((*(long *)(param_1 + 0x758) != 0) &&
       (uVar6 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940), (uVar6 & 1) == 0)) {
      if (**(int **)(param_1 + 0x88) == 4) {
        iVar5 = 1;
      }
      else if ((*(byte *)(param_1 + 0x183) & 1) == 0) {
        if (*(char *)((long)*(int **)(param_1 + 0x88) + 0xaee) == '\x06') {
          piVar10 = (int *)FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
          if (*piVar10 == 0) {
            iVar5 = *(int *)(param_1 + 0x16c);
            if (iVar5 == 8) {
              iVar5 = 1;
              *(undefined4 *)(param_1 + 0x16c) = 1;
            }
          }
          else {
            uVar7 = FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
            iVar5 = FUN_00932310(uVar7,param_1,0,**(undefined4 **)(param_1 + 0x88));
          }
        }
        else {
          iVar5 = 5;
        }
      }
      else {
        iVar5 = 6;
      }
      *(int *)(*(long *)(param_1 + 0x88) + 0xae8) = iVar5;
    }
    FUN_009dd930(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x610),
                 *(undefined8 *)(param_1 + 0x5f0),param_1,0);
    return;
  }
  if (*piVar10 == 4) {
    iVar5 = 1;
  }
  else if ((*(byte *)(param_1 + 0x183) & 1) == 0) {
    if (*(char *)((long)piVar10 + 0xaee) == '\x06') {
      uVar1 = *(undefined1 *)(param_1 + 0x174);
      piVar10 = (int *)FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
      if (*piVar10 == 0) {
        iVar5 = *(int *)(param_1 + 0x16c);
        if (iVar5 == 8) {
          iVar5 = 1;
          *(undefined4 *)(param_1 + 0x16c) = 1;
        }
      }
      else {
        uVar7 = FUN_00931ab0(*(undefined8 *)(param_1 + 0x610));
        iVar5 = FUN_00932310(uVar7,param_1,uVar1,**(undefined4 **)(param_1 + 0x88));
      }
    }
    else {
      iVar5 = 5;
    }
  }
  else {
    iVar5 = 6;
  }
  *(int *)(*(long *)(param_1 + 0x88) + 0xae8) = iVar5;
  if (((*(long *)(*(long *)(param_1 + 0x88) + 0xb00) != 0) &&
      (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) != '\x01')) &&
     (__src = (void *)FUN_008fe430(*(undefined8 *)
                                    (param_1 + (ulong)*(byte *)(param_1 + 0x174) * 8 + 0x198),
                                   &local_24), __src != (void *)0x0)) {
    memcpy(*(void **)(*(long *)(param_1 + 0x88) + 0xb00),__src,(ulong)local_24);
    *(uint *)(*(long *)(param_1 + 0x88) + 0xb08) = local_24;
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb10) = *(undefined8 *)(param_1 + 0xb8);
  }
  FUN_008f3420(param_1);
  FUN_009dd930(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x610),
               *(undefined8 *)(param_1 + 0x5f0),param_1,*(undefined1 *)(param_1 + 0x174));
  if ((*(long *)(param_1 + 0x188) != 0) || (*(long *)(param_1 + 400) != 0)) {
    FUN_009de580(*(undefined8 *)(param_1 + 0x88),param_1,*(undefined1 *)(param_1 + 0x174),iVar5);
  }
  lVar8 = *(long *)(param_1 + 0x88);
  if ((*(uint *)(lVar8 + 0xa70) >> 0xf & 1) == 0) {
    if ((*(uint *)(lVar8 + 0xa70) >> 0x1d & 1) == 0) goto LAB_008f32b0;
LAB_008f32e0:
    FUN_009de6e0(lVar8,param_1,*(undefined8 *)(param_1 + 0x610));
    lVar8 = *(long *)(param_1 + 0x88);
    if (*(char *)(lVar8 + 0xa84) == '\0') goto LAB_008f32f8;
LAB_008f32b8:
    uVar9 = 0;
    if (iVar5 != 0) goto LAB_008f3348;
LAB_008f3364:
    iVar3 = -*(int *)(param_1 + 0x15c);
  }
  else {
    FUN_009de660(lVar8,param_1,*(undefined8 *)(param_1 + 0x610),iVar5);
    lVar8 = *(long *)(param_1 + 0x88);
    if ((*(uint *)(lVar8 + 0xa70) >> 0x1d & 1) != 0) goto LAB_008f32e0;
LAB_008f32b0:
    if (*(char *)(lVar8 + 0xa84) != '\0') goto LAB_008f32b8;
LAB_008f32f8:
    uVar9 = *(uint *)(param_1 + 0x158);
    if (((*(byte *)(param_1 + 0x183) >> 3 & 1) == 0) &&
       (uVar2 = (1 << (*(char *)(param_1 + 0x5c0) != '\0')) << (*(char *)(param_1 + 0x5c1) != '\0'),
       1 < uVar2)) {
      uVar9 = uVar2 * uVar9;
      if (0x1869e < uVar9) {
        uVar9 = 99999;
      }
    }
    if (iVar5 == 0) goto LAB_008f3364;
LAB_008f3348:
    if (iVar5 == 2) goto LAB_008f3364;
    if (iVar5 != 1) goto LAB_008f3370;
    iVar3 = *(int *)(param_1 + 0x154) + uVar9;
  }
  *(int *)(lVar8 + 0xae4) = iVar3;
LAB_008f3370:
  FUN_0094dc80(param_1,iVar5);
  return;
}


