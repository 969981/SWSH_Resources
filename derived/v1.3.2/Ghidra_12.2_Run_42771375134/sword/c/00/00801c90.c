/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801c90; name: __put_character_sequence<char,std::char_traits<char>>
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::__put_character_sequence<char, std::char_traits<char> >(std::ostream&, char
   const*, unsigned long) */

ostream * std::__put_character_sequence<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,ulong param_3)

{
  ostream *poVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  sentry local_60 [16];
  id aiStack_48 [8];
  
  std::ostream::sentry::sentry(local_60,param_1);
  if (local_60[0] != (sentry)0x0) {
    poVar1 = param_1 + *(long *)(*(long *)param_1 + -0x18);
    uVar6 = *(undefined8 *)(poVar1 + 0x28);
    pcVar2 = param_2 + param_3;
    if ((*(uint *)(poVar1 + 8) & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
    if (*(int *)(poVar1 + 0x90) == -1) {
      std::ios_base::getloc();
      plVar4 = (long *)std::locale::use_facet(aiStack_48);
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      std::locale::~locale((locale *)aiStack_48);
      *(uint *)(poVar1 + 0x90) = uVar3 & 0xff;
    }
    lVar5 = FUN_00801da0(uVar6,param_2,pcVar2,param_2 + param_3,poVar1);
    if (lVar5 == 0) {
      std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::ostream::sentry::~sentry(local_60);
  return param_1;
}


