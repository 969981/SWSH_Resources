/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00735b60; name: FUN_00735b60
 */


void FUN_00735b60(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_006cf0a0(&local_80,PTR_DAT_02715b70);
  FUN_00708690(param_1,&local_80,2);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_02715c70;
  param_1[0x4d] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0xb0);
  param_1[10] = (long)(puVar2 + 0xf0);
  local_80 = *param_2;
  uStack_78 = param_2[1];
  uVar1 = param_2[2];
  local_60 = param_2[4];
  uStack_58 = param_2[5];
  local_50 = param_2[6];
  uStack_48 = param_2[7];
  *(undefined4 *)(param_2 + 2) = 0x1201;
  *(undefined4 *)((long)param_2 + 0x1c) = 0x1201;
  puVar2 = PTR_DAT_02710860;
  _local_70 = CONCAT44((int)((ulong)uVar1 >> 0x20),0x1307);
  local_68 = CONCAT44(0x1307,(int)param_2[3]);
  plVar6 = (long *)param_1[1];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x4a8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_006fdd90(lVar4,param_2);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x4a8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    plVar6 = (long *)param_1[1];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x590,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_006f1ba0(lVar5,&local_80);
      *(long **)(lVar5 + 8) = plVar6;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x590;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar3 = param_1[0x4d];
      param_1[0x4d] = lVar4;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      if (param_1[0x16] != 0) {
        (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
        param_1[0x16] = 0;
      }
      param_1[0x16] = lVar4;
      if (param_1[0x26] != 0) {
        (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
        param_1[0x26] = 0;
      }
      *(undefined1 *)(param_1 + 0x17) = 1;
      *(undefined1 *)((long)param_1 + 0x1ac) = 1;
      param_1[0x26] = lVar5;
      *(undefined4 *)(param_1 + 0x35) = 0xffffff9c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


