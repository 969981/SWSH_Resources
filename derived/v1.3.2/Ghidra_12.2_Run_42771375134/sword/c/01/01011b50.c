/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01011b50; name: FUN_01011b50
 */


undefined8 FUN_01011b50(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_02720298;
  puVar1 = PTR_DAT_02717c58;
  FUN_0100ee00(*(undefined8 *)PTR_DAT_02717c58,*(undefined8 *)(PTR_DAT_02720298 + (long)param_2 * 8)
              );
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x88,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_1;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_00e335b0(puVar3);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar3[1] = param_1;
  puVar3[2] = puVar3;
  puVar3[3] = 0x88;
  puVar3[4] = 8;
  lVar4 = *(long *)puVar1;
  *(undefined8 **)(puVar2 + (long)param_2 * 8) = puVar3;
  local_50 = 0x88;
  local_48 = 8;
  lVar5 = *(long *)(lVar4 + 0x50);
  local_58 = param_1;
  if ((ulong)(*(long *)(lVar4 + 0x58) - lVar5) < (ulong)(*(long *)(lVar4 + 0x60) - lVar5)) {
    local_60 = puVar3;
    FUN_0100f340((long *)(lVar4 + 0x50),lVar5,&local_60);
    puVar3 = local_60;
  }
  local_60 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*local_58 + 0x18))(local_58,puVar3,local_50,local_48);
  }
  return *(undefined8 *)(puVar2 + (long)param_2 * 8);
}


