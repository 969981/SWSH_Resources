/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd26a0; name: FUN_00bd26a0
 */


void FUN_00bd26a0(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_4 < 6) {
    uVar8 = (ulong)param_4;
    lVar5 = param_3 + (ulong)param_4 * 8 + 0x2fa8;
    lVar6 = param_3 + (ulong)(param_5 + param_4) * 8 + 0x2fa8;
    puVar7 = (undefined1 *)(param_3 + (ulong)(param_5 + param_4) + 0x2dc2);
    uVar9 = uVar8;
    do {
      if (5 < (uint)(param_5 + (int)uVar9)) break;
      fVar10 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),lVar6);
      fVar12 = param_2;
      fVar11 = (float)FUN_0167b760(*(undefined8 *)(param_3 + 0x58),lVar5);
      if (*(char *)(param_3 + 0x301b) == '\0') {
        lVar4 = 0;
        pcVar3 = (char *)(param_3 + 0x301b);
      }
      else if (*(char *)(param_3 + 0x3027) == '\0') {
        lVar4 = 1;
        pcVar3 = (char *)(param_3 + 0x3027);
      }
      else if (*(char *)(param_3 + 0x3033) == '\0') {
        lVar4 = 2;
        pcVar3 = (char *)(param_3 + 0x3033);
      }
      else if (*(char *)(param_3 + 0x303f) == '\0') {
        lVar4 = 3;
        pcVar3 = (char *)(param_3 + 0x303f);
      }
      else if (*(char *)(param_3 + 0x304b) == '\0') {
        lVar4 = 4;
        pcVar3 = (char *)(param_3 + 0x304b);
      }
      else if (*(char *)(param_3 + 0x3057) == '\0') {
        lVar4 = 5;
        pcVar3 = (char *)(param_3 + 0x3057);
      }
      else if (*(char *)(param_3 + 0x3063) == '\0') {
        lVar4 = 6;
        pcVar3 = (char *)(param_3 + 0x3063);
      }
      else if (*(char *)(param_3 + 0x306f) == '\0') {
        lVar4 = 7;
        pcVar3 = (char *)(param_3 + 0x306f);
      }
      else if (*(char *)(param_3 + 0x307b) == '\0') {
        lVar4 = 8;
        pcVar3 = (char *)(param_3 + 0x307b);
      }
      else if (*(char *)(param_3 + 0x3087) == '\0') {
        lVar4 = 9;
        pcVar3 = (char *)(param_3 + 0x3087);
      }
      else if (*(char *)(param_3 + 0x3093) == '\0') {
        lVar4 = 10;
        pcVar3 = (char *)(param_3 + 0x3093);
      }
      else {
        if (*(char *)(param_3 + 0x309f) != '\0') {
          return;
        }
        lVar4 = 0xb;
        pcVar3 = (char *)(param_3 + 0x309f);
      }
      lVar4 = param_3 + lVar4 * 0xc;
      uVar9 = uVar9 + 1;
      lVar5 = lVar5 + 8;
      param_2 = (fVar12 - param_2) * 0.25;
      *(float *)(lVar4 + 0x3010) = (fVar11 - fVar10) * 0.25;
      *(float *)(lVar4 + 0x3014) = param_2;
      lVar6 = lVar6 + 8;
      *(undefined1 *)(lVar4 + 0x3019) = *puVar7;
      *(undefined1 *)(lVar4 + 0x301a) = 4;
      *pcVar3 = '\x01';
      *(undefined1 *)(lVar4 + 0x3018) = 0;
      puVar7 = puVar7 + 1;
    } while (uVar9 < 6);
    if ((param_4 < 6) && (param_4 = param_4 + param_5, param_4 < 6)) {
      lVar5 = param_3 + 0x2dc2;
      uVar2 = *(undefined1 *)(lVar5 + uVar8);
      *(undefined1 *)(lVar5 + uVar8) = *(undefined1 *)(lVar5 + (ulong)param_4);
      *(undefined1 *)(lVar5 + (ulong)param_4) = uVar2;
      uVar9 = uVar8 + 1;
      if ((uVar9 < 6) && (uVar1 = param_4 + 1, uVar1 < 6)) {
        lVar5 = param_3 + 0x2dc2;
        uVar2 = *(undefined1 *)(lVar5 + uVar9);
        *(undefined1 *)(lVar5 + uVar9) = *(undefined1 *)(lVar5 + (ulong)uVar1);
        *(undefined1 *)(lVar5 + (ulong)uVar1) = uVar2;
        uVar9 = uVar8 + 2;
        if ((uVar9 < 6) && (uVar1 = param_4 + 2, uVar1 < 6)) {
          lVar5 = param_3 + 0x2dc2;
          uVar2 = *(undefined1 *)(lVar5 + uVar9);
          *(undefined1 *)(lVar5 + uVar9) = *(undefined1 *)(lVar5 + (ulong)uVar1);
          *(undefined1 *)(lVar5 + (ulong)uVar1) = uVar2;
          uVar9 = uVar8 + 3;
          if ((uVar9 < 6) && (uVar1 = param_4 + 3, uVar1 < 6)) {
            lVar5 = param_3 + 0x2dc2;
            uVar2 = *(undefined1 *)(lVar5 + uVar9);
            *(undefined1 *)(lVar5 + uVar9) = *(undefined1 *)(lVar5 + (ulong)uVar1);
            *(undefined1 *)(lVar5 + (ulong)uVar1) = uVar2;
            uVar9 = uVar8 + 4;
            if ((uVar9 < 6) && (uVar1 = param_4 + 4, uVar1 < 6)) {
              lVar5 = param_3 + 0x2dc2;
              uVar2 = *(undefined1 *)(lVar5 + uVar9);
              *(undefined1 *)(lVar5 + uVar9) = *(undefined1 *)(lVar5 + (ulong)uVar1);
              *(undefined1 *)(lVar5 + (ulong)uVar1) = uVar2;
              uVar8 = uVar8 + 5;
              if ((uVar8 < 6) && (param_4 = param_4 + 5, param_4 < 6)) {
                param_3 = param_3 + 0x2dc2;
                uVar2 = *(undefined1 *)(param_3 + uVar8);
                *(undefined1 *)(param_3 + uVar8) = *(undefined1 *)(param_3 + (ulong)param_4);
                *(undefined1 *)(param_3 + (ulong)param_4) = uVar2;
              }
            }
          }
        }
      }
    }
  }
  return;
}


