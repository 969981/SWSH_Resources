/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496a90; name: FUN_00496a90
 */


void FUN_00496a90(long param_1,ulong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  float local_38;
  float local_34;
  
  local_70 = *(undefined8 *)(param_1 + 8);
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  lVar5 = *(long *)(param_1 + 0x48) + (param_2 & 0xffffffff) * 0x60;
  FUN_0042e400(param_3,lVar5,&local_34,&local_38);
  puVar4 = PTR_DAT_02712b50;
  FUN_0049f0a0(*(undefined4 *)(lVar5 + 0x24),*(undefined8 *)PTR_DAT_02712b50,1,&local_70);
  fVar3 = DAT_01d4c784;
  fVar1 = DAT_01d4c3ec;
  FUN_0049f0a0((local_34 - (float)(int)(local_34 * DAT_01d4c3ec)) * DAT_01d4c784,
               *(undefined8 *)puVar4,2,&local_70);
  FUN_0049f0a0((local_38 - (float)(int)(local_38 * fVar1)) * fVar3,*(undefined8 *)puVar4,3,&local_70
              );
  FUN_0049f0a0((*(float *)(lVar5 + 0x28) - (float)(int)(*(float *)(lVar5 + 0x28) * fVar1)) * fVar3,
               *(undefined8 *)puVar4,4,&local_70);
  fVar2 = DAT_01d4c6b8;
  FUN_0049f0a0(*(float *)(lVar5 + 0x40) * DAT_01d4c6b8,*(undefined8 *)puVar4,5,&local_70);
  FUN_0049f0a0(*(float *)(lVar5 + 0x3c) * fVar2,*(undefined8 *)puVar4,6,&local_70);
  FUN_0049f0a0((*(float *)(lVar5 + 0x2c) - (float)(int)(*(float *)(lVar5 + 0x2c) * fVar1)) * fVar3,
               *(undefined8 *)puVar4,7,&local_70);
  return;
}


