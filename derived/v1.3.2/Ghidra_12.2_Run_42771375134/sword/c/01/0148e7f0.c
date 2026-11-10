/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148e7f0; name: FUN_0148e7f0
 */


void FUN_0148e7f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_28;
  
  lVar3 = param_1 + 0x100;
  FUN_00ffcf80(lVar3,"anime_L_win_marking_00_win_marking_open");
  uVar2 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e0));
  FUN_008789b0(uVar2,&local_48);
  puVar1 = PTR_DAT_0272a148;
  local_28 = *(undefined8 *)(PTR_DAT_0272a148 + (long)local_48 * 8);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = *(undefined8 *)(puVar1 + (long)local_44 * 8 + 0x18);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = *(undefined8 *)(puVar1 + (long)local_40 * 8 + 0x30);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = *(undefined8 *)(puVar1 + (long)local_3c * 8 + 0x48);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = *(undefined8 *)(puVar1 + (long)local_38 * 8 + 0x60);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = *(undefined8 *)(puVar1 + (long)local_34 * 8 + 0x78);
  FUN_00ffd010(lVar3,&local_28);
  local_28 = 0x4192a1f25ff4af1e;
  lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_28);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
  return;
}


