/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee2f0; name: FUN_008ee2f0
 */


ulong FUN_008ee2f0(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  ulong __n;
  ulong uVar6;
  char *pcVar7;
  char local_50 [8];
  undefined4 local_48;
  undefined2 local_44;
  
  pcVar7 = local_50;
  cVar1 = (char)param_1[1];
  if (*param_1 == 0) {
    local_50[0] = cVar1;
    __n = (ulong)(cVar1 != '\x05');
    if (cVar1 == '\x05') {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x05') {
      return 0;
    }
    local_48 = 0x5050505;
    local_44 = 5;
    if (param_2 == 1) {
      FUN_008ed970(param_1,&local_48);
      bVar2 = local_44._1_1_;
    }
    else if (param_2 == 2) {
      FUN_008ede10(param_1,&local_48);
      bVar2 = local_44._1_1_;
    }
    else {
      FUN_008ed800(param_1,&local_48);
      bVar2 = local_44._1_1_;
    }
    __n = (ulong)bVar2;
    if (__n != 0) {
      memcpy(local_50,&local_48,__n);
    }
    if (bVar2 == 0) {
      return 0;
    }
  }
  uVar6 = 0;
  do {
    lVar4 = FUN_008df7f0(param_4,*pcVar7);
    if ((lVar4 != 0) && (uVar5 = FUN_008e1600(), (uVar5 & 1) == 0)) {
      uVar3 = FUN_008e0a00(lVar4);
      uVar5 = uVar6 & 0xff;
      uVar6 = (ulong)((int)uVar6 + 1);
      *(undefined1 *)(param_5 + uVar5) = uVar3;
    }
    pcVar7 = pcVar7 + 1;
    __n = __n - 1;
  } while (__n != 0);
  return uVar6;
}


