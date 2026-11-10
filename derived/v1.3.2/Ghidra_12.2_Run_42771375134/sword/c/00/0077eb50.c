/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077eb50; name: FUN_0077eb50
 */


void FUN_0077eb50(long *param_1,long *param_2,ulong param_3,undefined1 param_4,long param_5,
                 undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *__s;
  long lVar6;
  long *plVar7;
  size_t __n;
  long *plVar8;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar4 = PTR_DAT_02716220;
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = (long)plVar7;
  param_1[9] = (long)(puVar4 + 0xb0);
  plVar8 = param_1 + 0xb;
  *plVar8 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar5 = *param_2;
  param_1[0x11] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    plVar7 = (long *)param_1[1];
  }
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = 0x4000600000000;
  *(undefined1 *)((long)param_1 + 0xa4) = param_6;
  __n = ((param_3 & 0xff) + (param_3 & 0xff) * 4) * 0x20;
  *(char *)(param_1 + 0x13) = (char)param_3;
  *(undefined4 *)((long)param_1 + 0x99) = 0;
  *(undefined1 *)((long)param_1 + 0x9d) = param_4;
  *(undefined2 *)((long)param_1 + 0xa2) = 0;
  *(undefined4 *)((long)param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0xa5) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  __s = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,__n,0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar7;
  lVar6 = *(long *)(lVar5 + 0x80);
  *(long *)(lVar5 + 0x80) = lVar6 + 1;
  if ((param_3 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  *(long *)(lVar5 + 0x80) = lVar6;
  lVar5 = *plVar8;
  *plVar8 = (long)__s;
  if (lVar5 != 0) {
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],lVar5,param_1[0xd],param_1[0xe]);
    __s = (undefined8 *)param_1[0xb];
  }
  param_1[0xc] = (long)plVar7;
  param_1[0xd] = __n;
  param_1[0xe] = 0x10;
  if (__s != (undefined8 *)0x0) {
    if ((param_3 & 0xff) != 0) {
      uVar1 = (uint)param_3 & 0xff;
      *__s = 0;
      if (uVar1 != 1) {
        uVar2 = ~(uint)param_3 & 1;
        if (uVar1 == 2) {
          lVar5 = 1;
        }
        else {
          lVar5 = 1;
          lVar6 = 0x140;
          do {
            *(undefined8 *)(*plVar8 + lVar6 + -0xa0) = 0;
            lVar5 = lVar5 + 2;
            *(undefined8 *)(*plVar8 + lVar6) = 0;
            lVar6 = lVar6 + 0x140;
          } while ((param_3 & 0xff) - (ulong)uVar2 != lVar5);
        }
        if (uVar2 != 0) {
          *(undefined8 *)(*plVar8 + lVar5 * 0xa0) = 0;
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0xa5) = *(undefined1 *)((long)param_1 + 0x9d);
    *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  return;
}


