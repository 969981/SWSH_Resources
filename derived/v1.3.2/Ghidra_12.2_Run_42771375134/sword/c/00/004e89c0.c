/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e89c0; name: FUN_004e89c0
 */


void FUN_004e89c0(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  ulong *__dest;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *__src;
  long *plVar8;
  float fVar9;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  if ((*(int *)(param_3 + 0x90) == *(int *)(param_1 + 0x5c)) &&
     (*(long *)(param_3 + 0x30) != *(long *)(param_2 + 0x30))) {
    local_80 = *(float *)(param_2 + 200);
    local_7c = *(float *)(param_2 + 0xcc);
    local_78 = *(float *)(param_2 + 0xd0);
    if (*(int *)(param_1 + 0x30) != 0) {
      plVar8 = *(long **)(param_1 + 0x28);
      do {
        lVar7 = *plVar8;
        if ((((*(char *)(lVar7 + 0x98) != '\0') &&
             (*(int *)(param_3 + 0x90) == *(int *)(lVar7 + 0x80))) && (*(int *)(lVar7 + 0x78) != 0))
           && (FUN_004eafa0(&local_90,lVar7,&local_80), *(int *)(lVar7 + 0x78) != 0)) {
          fVar9 = SQRT((local_90 - local_80) * (local_90 - local_80) +
                       (local_8c - local_7c) * (local_8c - local_7c) +
                       (local_88 - local_78) * (local_88 - local_78));
          __src = *(ulong **)(lVar7 + 0x70);
          do {
            if (__src[(ulong)((int)__src[0x20] - 1) * 3 + 8] != *(ulong *)(param_1 + 0x38)) {
              uVar6 = *__src;
              iVar2 = 0;
              iVar4 = (int)param_4[1] + -1;
              lVar3 = *param_4;
              if (-1 < iVar4) {
                do {
                  while( true ) {
                    iVar1 = iVar4 - iVar2;
                    if (iVar1 < 0) {
                      iVar1 = iVar1 + 1;
                    }
                    iVar1 = iVar2 + (iVar1 >> 1);
                    uVar5 = *(ulong *)(lVar3 + (long)iVar1 * 0x110);
                    if (uVar6 > uVar5 || uVar5 == uVar6) break;
                    iVar4 = iVar1 + -1;
                    if (iVar4 < iVar2) goto LAB_004e8b24;
                  }
                  if (uVar6 <= uVar5) {
                    __dest = (ulong *)(lVar3 + (long)iVar1 * 0x110);
                    if (__dest != (ulong *)0x0) goto LAB_004e8b64;
                    goto LAB_004e8b94;
                  }
                  iVar2 = iVar1 + 1;
                } while (iVar2 <= iVar4);
              }
LAB_004e8b24:
              if ((lVar3 == 0) || (lVar3 + (long)iVar2 * 0x110 == 0)) {
                __dest = (ulong *)FUN_004ea5c0(param_4);
              }
              else {
                __dest = (ulong *)FUN_004ea440(param_4);
              }
              if (__dest != (ulong *)0x0) {
                *__dest = uVar6;
LAB_004e8b64:
                if (*(float *)((long)__src + 0x104) + fVar9 < *(float *)((long)__dest + 0x104)) {
                  memcpy(__dest,__src,0x10c);
                  *(float *)((long)__dest + 0x104) = *(float *)((long)__src + 0x104) + fVar9;
                }
              }
            }
LAB_004e8b94:
            __src = __src + 0x22;
          } while (__src != (ulong *)(*(long *)(lVar7 + 0x70) +
                                     (ulong)*(uint *)(lVar7 + 0x78) * 0x110));
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
  }
  return;
}


