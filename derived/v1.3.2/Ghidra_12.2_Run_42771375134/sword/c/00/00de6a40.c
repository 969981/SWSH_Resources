/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de6a40; name: FUN_00de6a40
 */


void FUN_00de6a40(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 9) = param_3;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3,1);
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    lVar4 = *(long *)(lVar2 + 0x80);
    *(long *)(lVar2 + 0x80) = lVar4 + 1;
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,(ulong)param_3);
    }
    *(long *)(lVar2 + 0x80) = lVar4;
    lVar2 = param_1[1];
    param_1[1] = __s;
    if (lVar2 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[3],param_1[4]);
      __s = (void *)param_1[1];
    }
    param_1[2] = param_2;
    param_1[3] = 0;
    plVar5 = (long *)*param_1;
    param_1[4] = 1;
    plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xc0,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      FUN_00760770(plVar3,__s,*(undefined4 *)(param_1 + 9),0);
      puVar1 = PTR_DAT_02710518;
      *(undefined1 *)(plVar3 + 0x17) = 0;
      *plVar3 = (long)(puVar1 + 0x10);
      plVar3[1] = (long)(puVar1 + 0xe8);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar6 = (undefined8 *)param_1[5];
      param_1[5] = plVar3;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar6,param_1[7],param_1[8]);
      }
      param_1[6] = plVar5;
      param_1[7] = 0xc0;
      param_1[8] = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


