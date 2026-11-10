/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008da800; name: FUN_008da800
 */


void FUN_008da800(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  *param_1 = param_2[1];
  param_1[1] = param_2[2];
  param_1[2] = param_2[3];
  param_1[3] = param_2[4];
  param_1[4] = param_2[5];
  uVar3 = param_2[6];
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = uVar3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar5 = (long *)*param_2;
  uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0xc10,8);
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_008dbf50(uVar3,*param_2);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar6 = (undefined8 *)*puVar4;
    *puVar4 = uVar3;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],puVar6,param_1[8],param_1[9]);
    }
    param_1[7] = plVar5;
    param_1[8] = 0xc10;
    param_1[9] = 8;
    plVar5 = (long *)*param_2;
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x410,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      FUN_008dc4b0(uVar3,*param_2);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar4 = (undefined8 *)param_1[10];
      param_1[10] = uVar3;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(*(long *)param_1[0xb] + 0x18))
                  ((long *)param_1[0xb],puVar4,param_1[0xc],param_1[0xd]);
        uVar3 = param_1[10];
      }
      param_1[0xb] = plVar5;
      param_1[0xc] = 0x410;
      *(undefined4 *)(param_1 + 0xf) = 0;
      param_1[0xd] = 8;
      param_1[0xe] = 0;
      FUN_008dc630(uVar3);
      FUN_008dc0f0(param_1[6]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


