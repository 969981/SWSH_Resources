/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af5d0; name: FUN_009af5d0
 */


long * FUN_009af5d0(long *param_1,byte param_2,byte *param_3,byte *param_4,undefined1 *param_5)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *__dest;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  
  *param_5 = 0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)param_2;
  if ((int)uVar4 < 0) {
    __dest = param_1 + uVar8 * 8 + 4;
  }
  else {
    __dest = param_1 + uVar8 * 8 + 4;
    puVar9 = (uint *)((long)param_1 + uVar8 * 4 + 0xc);
    uVar6 = *puVar9;
    do {
      if ((uVar4 & 0x7fffffff) <= uVar6) break;
      bVar2 = *(byte *)(*param_1 + (ulong)uVar6);
      *param_4 = bVar2 >> 7;
      uVar10 = *puVar9;
      uVar6 = uVar10 + 1;
      *puVar9 = uVar6;
      uVar4 = *(uint *)(param_1 + 1);
      if ((uVar4 & 0x7fffffff) < uVar6) break;
      bVar1 = bVar2 >> 4 & 7;
      if (bVar1 == 1) {
        if (4 < ((bVar2 & 0xf) - 1 & 0xff)) break;
        lVar7 = *param_1;
        uVar10 = uVar10 + 2;
        *puVar9 = uVar10;
        if (uVar10 < (uVar4 & 0x7fffffff)) {
          pbVar5 = (byte *)(lVar7 + (ulong)uVar6);
          plVar3 = (long *)0x0;
          iVar11 = 0;
          do {
            bVar1 = *pbVar5;
            if (bVar1 >> 5 == param_2) {
              memcpy(__dest,(void *)(lVar7 + (ulong)uVar10),((ulong)bVar1 & 0x1f) << 3);
              *puVar9 = uVar10 + (bVar1 & 0x1f) * 8;
              *param_3 = bVar1 & 0x1f;
              plVar3 = __dest;
            }
            else {
              *puVar9 = uVar10 + (bVar1 & 0x1f) * 8;
            }
            if ((bVar2 & 0xf) <= iVar11 + 1U) break;
            iVar11 = iVar11 + 1;
            uVar4 = *(uint *)(param_1 + 1);
            uVar10 = *puVar9 + 1;
            lVar7 = *param_1;
            pbVar5 = (byte *)(lVar7 + (ulong)*puVar9);
            *puVar9 = uVar10;
          } while (uVar10 < (uVar4 & 0x7fffffff));
        }
        else {
          plVar3 = (long *)0x0;
        }
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
      }
      else {
        if (bVar1 != 2) {
          if (bVar1 == 3) {
            FUN_00918700(__dest);
            goto LAB_009af79c;
          }
          break;
        }
        *param_5 = 1;
      }
      uVar4 = *(uint *)(param_1 + 1);
      uVar6 = *puVar9;
    } while (uVar6 < (uVar4 & 0x7fffffff));
    *(uint *)(param_1 + 1) = uVar4 | 0x80000000;
  }
  FUN_00918720(__dest);
LAB_009af79c:
  *param_3 = 1;
  *param_4 = 0;
  return __dest;
}


