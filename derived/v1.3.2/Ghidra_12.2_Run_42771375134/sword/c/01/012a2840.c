/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a2840; name: FUN_012a2840
 */


undefined8 FUN_012a2840(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint *__src;
  char *pcVar5;
  long *plVar6;
  long local_48;
  
  lVar3 = FUN_007df930(*(undefined8 *)(param_1 + 0x78));
  pcVar5 = *(char **)(lVar3 + 8);
  cVar1 = *pcVar5;
  if (cVar1 == '\x02') {
    FUN_012a2c70(param_1);
    return 0;
  }
  uVar4 = (uint)(*(ushort *)(pcVar5 + 5) >> 8) | (*(ushort *)(pcVar5 + 5) & 0xff00ff) << 8;
  if (5 < uVar4) {
    uVar4 = 6;
  }
  if (*(long *)(param_1 + 0x98) == 0) {
    lVar3 = 0;
LAB_012a28cc:
    local_48 = 0;
  }
  else {
    FUN_012a3260(&local_48);
    lVar3 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      goto LAB_012a28cc;
    }
  }
  __src = (uint *)(pcVar5 + 7);
  if (uVar4 != 0) {
    uVar2 = (*__src & 0xff00ff00) >> 8 | (*__src & 0xff00ff) << 8;
    *(uint *)(lVar3 + 0x74) = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((((1 < uVar4) &&
         (uVar2 = (*(uint *)(pcVar5 + 0xb) & 0xff00ff00) >> 8 |
                  (*(uint *)(pcVar5 + 0xb) & 0xff00ff) << 8,
         *(uint *)(lVar3 + 0x78) = uVar2 >> 0x10 | uVar2 << 0x10, uVar4 != 2)) &&
        (uVar2 = (*(uint *)(pcVar5 + 0xf) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar5 + 0xf) & 0xff00ff) << 8,
        *(uint *)(lVar3 + 0x7c) = uVar2 >> 0x10 | uVar2 << 0x10, 3 < uVar4)) &&
       ((uVar2 = (*(uint *)(pcVar5 + 0x13) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar5 + 0x13) & 0xff00ff) << 8,
        *(uint *)(lVar3 + 0x80) = uVar2 >> 0x10 | uVar2 << 0x10, uVar4 != 4 &&
        (uVar2 = (*(uint *)(pcVar5 + 0x17) & 0xff00ff00) >> 8 |
                 (*(uint *)(pcVar5 + 0x17) & 0xff00ff) << 8,
        *(uint *)(lVar3 + 0x84) = uVar2 >> 0x10 | uVar2 << 0x10, 5 < uVar4)))) {
      uVar2 = (*(uint *)(pcVar5 + 0x1b) & 0xff00ff00) >> 8 |
              (*(uint *)(pcVar5 + 0x1b) & 0xff00ff) << 8;
      *(uint *)(lVar3 + 0x88) = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    __src = (uint *)(pcVar5 + (((ulong)(uVar4 << 2) & 0xfffc) + 0x3fffffffc & 0x3fffffffc) + 0xb);
  }
  if (cVar1 == '\0') {
    if (*(long *)(param_1 + 0x98) == 0) {
      local_48 = 0;
      memcpy(&DAT_0000008c,__src,0x100);
      lVar3 = *(long *)(param_1 + 0x98);
      goto joined_r0x012a2a2c;
    }
    FUN_012a3260(&local_48);
    lVar3 = local_48;
    memcpy((void *)(local_48 + 0x8c),__src,0x100);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_48 = 0;
      lVar3 = *(long *)(param_1 + 0x98);
      goto joined_r0x012a2a2c;
    }
  }
  lVar3 = *(long *)(param_1 + 0x98);
joined_r0x012a2a2c:
  if (lVar3 == 0) {
    DAT_00000070 = cVar1 == '\x01';
  }
  else {
    FUN_012a3260(&local_48);
    *(bool *)(local_48 + 0x70) = cVar1 == '\x01';
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return 1;
}


