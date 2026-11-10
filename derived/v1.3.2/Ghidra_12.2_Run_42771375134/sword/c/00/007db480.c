/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007db480; name: FUN_007db480
 */


bool FUN_007db480(long param_1,long param_2,void *param_3,uint param_4,undefined2 param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  undefined2 *puVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ErrorResultVariant *this;
  long lVar6;
  undefined4 local_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  if (param_4 == 0) {
    return false;
  }
  uVar1 = (ulong)param_4 + 4;
  if (0x24000 < uVar1) {
    return false;
  }
  puVar2 = (undefined2 *)(param_1 + 0x240f0);
  *puVar2 = param_5;
  *(undefined1 *)(param_1 + 0x240f2) = *(undefined1 *)(param_1 + 0x480f0);
  *(undefined1 *)(param_1 + 0x240f3) = 0;
  memcpy((void *)(param_1 + 0x240f4),param_3,(ulong)param_4);
  if (*(long *)PTR_DAT_027104a0 == 0) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_02716a30;
  if (lVar6 == 0) {
LAB_007db600:
    bVar3 = false;
  }
  else {
    plVar4 = (long *)FUN_007a8490(*(long *)PTR_DAT_027104a0,param_6);
    if (plVar4 == (long *)0x0) {
      return false;
    }
    if (*(long *)(lVar6 + 0xf0) == param_2) {
      FUN_007db620(param_1,param_2,puVar2,uVar1 & 0xffffffff,param_6);
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
      if ((uVar5 & 1) == 0) goto LAB_007db600;
      (**(code **)(*plVar4 + 0x70))(local_60,plVar4,param_2,puVar2,uVar1 & 0xffffffff);
      if (local_60[0] != 0) {
        local_70[0] = 0x4c0d;
        this = (ErrorResultVariant *)((ulong)local_70 | 4);
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_48[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
        local_70[0] = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_48[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
        return local_60[0] == 0;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}


