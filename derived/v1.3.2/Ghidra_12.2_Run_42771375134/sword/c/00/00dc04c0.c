/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc04c0; name: FUN_00dc04c0
 */


void FUN_00dc04c0(long param_1,long *param_2,byte param_3,byte param_4,uint param_5)

{
  size_t __n;
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *__dest;
  long *plVar5;
  long *plVar6;
  long local_68;
  
  plVar5 = *(long **)(param_1 + 0x458);
  plVar6 = *(long **)(param_1 + 0x460);
  if (plVar5 != plVar6) {
    do {
      if (*plVar5 == *param_2) {
        if ((param_5 & 1) == 0) {
          FUN_00794740(plVar5[0x24]);
        }
        else {
          local_68 = FUN_00794780(plVar5[0x24]);
          if (((local_68 != 0) && (0 < *(int *)(local_68 + 0x17c))) &&
             (*(char *)(local_68 + 0xc) != '\0')) {
            plVar3 = *(long **)(param_1 + 0x490);
            __dest = *(long **)(param_1 + 0x488);
            plVar2 = *(long **)(param_1 + 0x498);
            if ((ulong)((long)plVar2 - (long)__dest) <= (ulong)((long)plVar3 - (long)__dest)) {
              lVar1 = *__dest;
              if ((0 < *(int *)(lVar1 + 0x17c)) && (*(char *)(lVar1 + 0xc) != '\0')) {
                FUN_019d67f0(lVar1,1);
                plVar3 = *(long **)(param_1 + 0x490);
              }
              __n = (long)plVar3 - (long)(__dest + 1);
              if (__n != 0) {
                memmove(__dest,__dest + 1,__n);
              }
              plVar2 = *(long **)(param_1 + 0x498);
              plVar3 = __dest + ((long)__n >> 3);
              *(long **)(param_1 + 0x490) = plVar3;
            }
            if (plVar3 == plVar2) {
              FUN_00dc2a30(param_1 + 0x488,&local_68);
            }
            else {
              uVar4 = *(undefined8 *)(param_1 + 0x4a0);
              lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
              *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
              *plVar3 = local_68;
              *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
              *(long *)(param_1 + 0x490) = *(long *)(param_1 + 0x490) + 8;
            }
          }
        }
        FUN_00794370(plVar5[0x24],plVar5 + 2);
        FUN_00794450(plVar5[0x24],plVar5 + 0x25);
        FUN_00794650(plVar5[0x24],plVar5 + 0x2a);
        FUN_007946a0(plVar5[0x24],param_3 & 1);
        *(byte *)((long)plVar5 + 0x174) = ~param_3 & 1;
        *(byte *)((long)plVar5 + 0x175) = param_4 & 1;
        FUN_00db81b0(plVar5[0x24],*(undefined4 *)(param_1 + 0x4b8),1);
      }
      plVar5 = plVar5 + 0x30;
    } while (plVar6 != plVar5);
  }
  return;
}


