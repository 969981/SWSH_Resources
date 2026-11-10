/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d5730; name: FUN_007d5730
 */


undefined8
FUN_007d5730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,short param_5,
            long param_6)

{
  long *plVar1;
  size_t __n;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *__dest;
  long *plVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  short local_78;
  undefined6 uStack_76;
  long local_70;
  long lStack_68;
  
  plVar7 = *(long **)(param_1 + 0x70);
  plVar1 = *(long **)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x1b8);
  if ((ulong)(lVar4 + ((long)plVar1 - (long)plVar7 >> 3)) < 0x41) {
    if (plVar7 != plVar1) {
      do {
        lStack_68 = *plVar7;
        puVar6 = *(undefined8 **)(param_1 + 0x1b0);
        __dest = puVar6;
        if (lVar4 != 0) {
          lVar5 = lVar4 * 0x30;
          do {
            if (((*(short *)(__dest + 3) == param_5) && (lStack_68 == __dest[5])) &&
               (__dest[4] == param_6)) goto LAB_007d5808;
            lVar5 = lVar5 + -0x30;
            __dest = __dest + 6;
          } while (lVar5 != 0);
          __dest = puVar6 + lVar4 * 6;
        }
LAB_007d5808:
        local_90 = param_2;
        uStack_88 = param_3;
        local_80 = param_4;
        local_78 = param_5;
        local_70 = param_6;
        uVar3 = FUN_007d53a0(param_1,&local_90);
        lVar4 = *(long *)(param_1 + 0x1b8);
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x1b0) + lVar4 * 0x30);
        if ((uVar3 & 1) == 0) {
          if (puVar6 == __dest) {
            FUN_007d76d0(param_1 + 0x170,&local_90);
          }
          else {
            *__dest = local_90;
            __dest[1] = uStack_88;
            __dest[4] = local_70;
            __dest[5] = lStack_68;
            __dest[2] = local_80;
            __dest[3] = CONCAT62(uStack_76,local_78);
          }
        }
        else if (puVar6 != __dest) {
          __n = (long)puVar6 - (long)(__dest + 6);
          if (__n != 0) {
            memmove(__dest,__dest + 6,__n);
            lVar4 = *(long *)(param_1 + 0x1b8);
          }
          *(long *)(param_1 + 0x1b8) = lVar4 + -1;
        }
        if (plVar7 + 1 == plVar1) break;
        plVar7 = plVar7 + 1;
        lVar4 = *(long *)(param_1 + 0x1b8);
      } while( true );
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


