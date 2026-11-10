/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0107f570; name: FUN_0107f570
 */


void FUN_0107f570(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  byte *local_88;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  FUN_012b4da0(auStack_60,*(undefined8 *)(*(long *)(param_2 + 8) + 400),
               *(undefined8 *)(*(long *)(param_2 + 8) + 0x180));
  uVar3 = FUN_012b4090(auStack_60);
  if ((uVar3 & 1) != 0) {
    local_90 = 0x2193def99f63fee0;
    local_88 = (byte *)0x1d22176;
    local_80 = 0xb;
    FUN_012b4250(auStack_70,auStack_60,&local_90);
    lVar5 = 0;
    do {
      FUN_012b4190(auStack_b0,auStack_70,lVar5);
      FUN_012b4190(auStack_a0,auStack_b0,0);
      local_d0 = 0xcbf29ce484222645;
      puStack_c8 = &DAT_01d38550;
      local_c0 = 0;
      local_b8 = 0;
      FUN_012b4820(&local_90,auStack_a0,&local_d0);
      pbVar4 = local_88;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      bVar2 = *pbVar4;
      uVar3 = 0xcbf29ce484222645;
      if (bVar2 != 0) {
        uVar3 = 0xcbf29ce484222645;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = (uVar3 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar4;
        } while (bVar2 != 0);
      }
      lVar1 = param_1 + lVar5 * 0x20;
      *(ulong *)(lVar1 + 0x68) = uVar3;
      FUN_012b4190(auStack_b0,auStack_70,lVar5);
      FUN_012b4190(auStack_a0,auStack_b0,1);
      local_d0 = 0xcbf29ce484222645;
      puStack_c8 = &DAT_01d38550;
      local_c0 = 0;
      local_b8 = 0;
      FUN_012b4820(&local_90,auStack_a0,&local_d0);
      pbVar4 = local_88;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      bVar2 = *pbVar4;
      uVar3 = 0xcbf29ce484222645;
      if (bVar2 != 0) {
        uVar3 = 0xcbf29ce484222645;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = (uVar3 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar4;
        } while (bVar2 != 0);
      }
      *(ulong *)(lVar1 + 0x70) = uVar3;
      FUN_012b4190(auStack_b0,auStack_70,lVar5);
      FUN_012b4190(auStack_a0,auStack_b0,2);
      local_d0 = 0xcbf29ce484222645;
      puStack_c8 = &DAT_01d38550;
      local_c0 = 0;
      local_b8 = 0;
      FUN_012b4820(&local_90,auStack_a0,&local_d0);
      pbVar4 = local_88;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      bVar2 = *pbVar4;
      uVar3 = 0xcbf29ce484222645;
      if (bVar2 != 0) {
        uVar3 = 0xcbf29ce484222645;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = (uVar3 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar4;
        } while (bVar2 != 0);
      }
      *(ulong *)(lVar1 + 0x78) = uVar3;
      FUN_012b4190(auStack_b0,auStack_70,lVar5);
      FUN_012b4190(auStack_a0,auStack_b0,3);
      local_d0 = 0xcbf29ce484222645;
      puStack_c8 = &DAT_01d38550;
      local_c0 = 0;
      local_b8 = 0;
      FUN_012b4820(&local_90,auStack_a0,&local_d0);
      pbVar4 = local_88;
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      bVar2 = *pbVar4;
      uVar3 = 0xcbf29ce484222645;
      if (bVar2 != 0) {
        uVar3 = 0xcbf29ce484222645;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = (uVar3 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar4;
        } while (bVar2 != 0);
      }
      lVar5 = lVar5 + 1;
      *(ulong *)(lVar1 + 0x80) = uVar3;
    } while (lVar5 != 2);
  }
  return;
}


