/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734610; name: FUN_00734610
 */


void FUN_00734610(long param_1,undefined8 param_2,ulong *param_3)

{
  byte *__s;
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  ulong local_88;
  byte *local_80;
  size_t local_78;
  long local_70;
  int local_68;
  uint local_64;
  
  lVar4 = *(long *)(param_1 + 0xe8);
  lVar6 = *(long *)(param_1 + 0xf0);
  puVar12 = &DAT_0213f334;
  do {
    local_64 = *puVar12;
    uVar3 = (ulong)local_64;
    lVar5 = *param_3 + (ulong)local_64 * 0x120;
    lVar7 = *(long *)(lVar5 + 0x1a0);
    if ((((lVar7 != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x78) + *(long *)(&DAT_0213f350 + uVar3 * 8)),
         lVar7 != 0)) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) && (0 < *(int *)(lVar7 + 4))
       ) {
      lVar9 = 0;
      while( true ) {
        lVar9 = lVar9 + 1;
        lVar11 = *(long *)(lVar7 + lVar9 * 0x10 + 0x10);
        __s = (byte *)(lVar11 + 2);
        local_68 = FUN_0072a0b0(lVar5 + 0x90,uVar3,3,__s);
        if (-1 < local_68) {
          local_78 = strlen((char *)__s);
          bVar2 = *__s;
          local_88 = 0xcbf29ce484222645;
          if (bVar2 != 0) {
            local_88 = 0xcbf29ce484222645;
            pbVar8 = (byte *)(lVar11 + 3);
            do {
              local_88 = (local_88 ^ bVar2) * 0x100000001b3;
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_70 = 0;
          uVar3 = *(ulong *)(param_1 + 0xf0);
          local_80 = __s;
          if (uVar3 < *(ulong *)(param_1 + 0xf8)) {
            uVar10 = *(undefined8 *)(param_1 + 0x100);
            lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_007348cc;
            *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar10;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            FUN_00723a70(uVar3,&local_88,local_64,local_68);
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 0x40;
          }
          else {
            FUN_00734d80((long *)(param_1 + 0xe8),&local_88,&local_64,&local_68);
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
        }
        if (*(int *)(lVar7 + 4) <= lVar9) break;
        uVar3 = (ulong)local_64;
      }
    }
    puVar12 = puVar12 + 1;
  } while (puVar12 != (uint *)&UNK_0213f34c);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = (byte *)CONCAT44((int)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8))
                                   >> 6),(int)((ulong)(lVar6 - lVar4) >> 6));
  puVar1 = *(ulong **)(param_1 + 0xc0);
  if (puVar1 < *(ulong **)(param_1 + 200)) {
    uVar10 = *(undefined8 *)(param_1 + 0xd0);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007348cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar1 = local_88;
    puVar1[1] = (ulong)local_80;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 0x10;
  }
  else {
    FUN_007350c0(param_1 + 0xb8,&local_88);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    }
  }
  return;
}


