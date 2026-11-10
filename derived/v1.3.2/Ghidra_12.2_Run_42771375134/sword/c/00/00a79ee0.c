/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79ee0; name: FUN_00a79ee0
 */


void FUN_00a79ee0(long param_1,long *param_2,byte param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  char *pcVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  bool bVar7;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined8 local_38;
  
  FUN_00b17d50(*(undefined8 *)(param_1 + 0x4e8));
  plVar4 = (long *)PTR_PTR_02710928;
  if (param_2[3] == 0) {
    local_48 = 0;
    local_70[0] = 0;
    local_70[1] = 0xcbf29ce484222645;
    local_50 = 0;
    local_60 = &DAT_01d38550;
    local_58 = 0;
  }
  else {
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*param_2 + 0x60);
    }
    local_38 = *puVar1;
    FUN_00a8d290(local_70,&local_38,&DAT_01d38550,(int)param_2[5]);
    if (local_58 != 0) {
      bVar7 = false;
      if (local_70[0] != 0) {
        plVar4 = (long *)(local_70[0] + 0x60);
      }
      goto LAB_00a79fa0;
    }
  }
  plVar4 = local_70 + 2;
  bVar7 = true;
LAB_00a79fa0:
  pcVar3 = strrchr((char *)*plVar4,0x2f);
  pbVar5 = (byte *)0x0;
  if (pcVar3 != (char *)0x0) {
    pbVar5 = (byte *)(pcVar3 + 1);
  }
  bVar2 = *pbVar5;
  uVar6 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar6 = 0xcbf29ce484222645;
    do {
      pbVar5 = pbVar5 + 1;
      uVar6 = (uVar6 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
    } while (bVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(ulong *)(param_1 + 0x1dc8) = uVar6;
  *(byte *)(param_1 + 0x16f9) = param_3 & 1;
  if ((!bVar7) && (local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


