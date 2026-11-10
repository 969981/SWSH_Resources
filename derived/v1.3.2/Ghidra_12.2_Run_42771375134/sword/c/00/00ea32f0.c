/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea32f0; name: FUN_00ea32f0
 */


ulong FUN_00ea32f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  byte local_c0 [128];
  
  lVar1 = *param_1;
  uVar4 = FUN_00e332e0(*(undefined8 *)param_1[1]);
  if (((int)uVar4 == 3) || (DAT_01d4c0e4 <= *(float *)param_1[4])) {
    uVar7 = 0xcbf29ce484222645;
    pcVar5 = (char *)FUN_00e33410(*(undefined8 *)param_1[1],param_2,0,*(undefined4 *)(lVar1 + 0x80c)
                                  ,0);
    if (pcVar5 != (char *)0x0) {
      snprintf((char *)local_c0,0x80,"bin/field/effect/particle/ef_chara_running/%s.ptcl",pcVar5);
      uVar4 = 0xcbf29ce484222645;
      if (local_c0[0] != 0) {
        uVar4 = 0xcbf29ce484222645;
        pbVar6 = (byte *)((ulong)local_c0 | 1);
        bVar2 = local_c0[0];
        do {
          uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar2 != 0);
      }
      *(ulong *)param_1[2] = uVar4;
    }
    pcVar5 = (char *)FUN_00e33410(*(undefined8 *)param_1[1],param_2,0,*(undefined4 *)(lVar1 + 0x80c)
                                  ,1);
    uVar4 = 0;
    if (pcVar5 != (char *)0x0) {
      uVar3 = snprintf((char *)local_c0,0x80,"bin/field/effect/particle/ef_chara_running/%s.ptcl",
                       pcVar5);
      uVar4 = (ulong)uVar3;
      if (local_c0[0] != 0) {
        pbVar6 = (byte *)((ulong)local_c0 | 1);
        do {
          uVar7 = (uVar7 ^ local_c0[0]) * 0x100000001b3;
          local_c0[0] = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (local_c0[0] != 0);
      }
      *(ulong *)param_1[3] = uVar7;
    }
  }
  return uVar4;
}


