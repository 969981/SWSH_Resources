/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603500; name: FUN_00603500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00603500(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *__s;
  undefined8 *puVar4;
  long lVar5;
  size_t __n;
  long *plVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    return 6;
  }
  lVar1 = *(long *)(lVar5 + 0x10);
  __n = *(size_t *)(*(long *)(lVar5 + 0x18) + 0x58);
  if (0 < (long)__n) {
    __s = (void *)(**(code **)(lVar1 + 8))(lVar1,__n);
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,__n);
    }
    iVar3 = 0x40;
joined_r0x0060357c:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    return iVar3;
  }
  if (__n != 0) {
    iVar3 = 6;
    goto joined_r0x0060357c;
  }
  plVar6 = *(long **)(param_1 + 0xb0);
  lRam0000000000000000 = plVar6[1];
  lVar5 = plVar6[2];
  lVar2 = plVar6[3];
  _DAT_00000008 = param_1;
  puVar4 = (undefined8 *)(**(code **)(lVar5 + 8))(lVar5,0x48);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_006036c0(0);
    return 0x40;
  }
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  _DAT_00000128 = puVar4;
  if ((*(byte *)(*plVar6 + 1) >> 1 & 1) == 0) {
    plVar6 = (long *)(**(code **)(lVar5 + 8))(lVar5,0xb0);
    if (plVar6 == (long *)0x0) {
      FUN_006036c0(0);
      iVar3 = 0x40;
      goto LAB_0060368c;
    }
    plVar6[0x14] = 0;
    plVar6[0x15] = 0;
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *plVar6 = lVar5;
    plVar6[1] = 0;
    *puVar4 = plVar6;
  }
  if ((*(code **)(lVar2 + 0x80) == (code *)0x0) ||
     (iVar3 = (**(code **)(lVar2 + 0x80))(0), iVar3 == 0)) {
    _DAT_00000010 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    *param_2 = 0;
    return 0;
  }
  FUN_006036c0(0);
LAB_0060368c:
  (**(code **)(lVar1 + 0x10))(lVar1,0);
  return iVar3;
}


