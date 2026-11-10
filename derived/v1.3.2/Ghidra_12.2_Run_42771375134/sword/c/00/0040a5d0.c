/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040a5d0; name: FUN_0040a5d0
 */


void FUN_0040a5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  size_t __n;
  float local_64;
  
  puVar4 = PTR_DAT_02712a90;
  if (param_5 == 0x36) {
    local_64 = 0.0;
    pbVar6 = *(byte **)(param_4 + 0x90);
    if (pbVar6 != (byte *)0x0) {
      uVar8 = 0;
      pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
      do {
        if (pbVar6[uVar8 + 1] == 0x36) goto LAB_0040a654;
        uVar8 = uVar8 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar8 < *pbVar6);
    }
    pfVar7 = (float *)0x0;
LAB_0040a654:
    pfVar3 = &local_64;
    if (pfVar7 != (float *)0x0) {
      pfVar3 = pfVar7;
    }
    if ((float)param_1 - *pfVar3 != 0.0) {
      if (pbVar6 == (byte *)0x0) {
        __n = 0;
      }
      else {
        __n = (size_t)*pbVar6;
        uVar8 = 0;
        pfVar7 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
        do {
          if (pbVar6[uVar8 + 1] == 0x36) {
            if (pfVar7 != (float *)0x0) goto LAB_0040a744;
            break;
          }
          uVar8 = uVar8 + 1;
          pfVar7 = pfVar7 + 1;
        } while (uVar8 < __n);
      }
      iVar9 = (int)__n;
      uVar2 = iVar9 + 5U & 0x1fc;
      lVar1 = __n + 1;
      puVar5 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
      if (puVar5 != (undefined1 *)0x0) {
        if (*(long *)(param_4 + 0x90) != 0) {
          memcpy(puVar5 + 1,(void *)(*(long *)(param_4 + 0x90) + 1),__n);
          memcpy(puVar5 + uVar2,(void *)(*(long *)(param_4 + 0x90) + (ulong)(iVar9 + 4U & 0x1fc)),
                 (ulong)(uint)(iVar9 << 2));
          FUN_00404870(*(undefined4 *)puVar4,*(undefined8 *)(param_4 + 0x90));
        }
        puVar5[lVar1] = 0x36;
        pfVar7 = (float *)(puVar5 + __n * 4 + (ulong)uVar2);
        *puVar5 = (char)lVar1;
        *(undefined1 **)(param_4 + 0x90) = puVar5;
        if (pfVar7 != (float *)0x0) {
LAB_0040a744:
          *pfVar7 = (float)param_1;
        }
      }
      FUN_00406a40(0);
    }
  }
  FUN_0047e270(param_1,param_2,param_3,param_4,param_5);
  return;
}


